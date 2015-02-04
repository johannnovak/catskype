#include <QTextDocument>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

class TextDocumentImproved : public QTextDocument
{
    Q_OBJECT
public:
    TextDocumentImproved(QObject *parent = 0) : QTextDocument(parent), m_nam(0){}
protected:
    QVariant loadResource(int type, const QUrl &name){
        if(type == QTextDocument::ImageResource)
        {
            if(name.toString().startsWith("http://") || name.toString().startsWith("https://"))
            {
                if(m_nam == 0) m_nam = new QNetworkAccessManager(this);
                if(!m_imageUrl.contains(name))
                {
                    m_imageUrl[name] = false;
                    QNetworkReply *reply = m_nam->get(QNetworkRequest(name));
                    connect(reply, SIGNAL(finished()), SLOT(replyFinished()));
                    return QVariant();
                } else {
                    if(!m_imageUrl.value(name, false))
                        return QVariant();
                }
            }
        }
    return QTextDocument::loadResource(type, name);
    }
private slots:
    void replyFinished()
    {
        QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());
        reply->deleteLater();
        addResource(QTextDocument::ImageResource, reply->url(), reply->readAll());
        m_imageUrl[reply->url()] = true;
        adjustSize();
    }
private:
    QNetworkAccessManager *m_nam;
    QHash<QUrl, bool> m_imageUrl; // untuk menampung url yg telah didownload atau belum
};
