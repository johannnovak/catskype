#############################################################################
# Makefile for building: CatSkype
# Generated by qmake (3.0) (Qt 5.1.0) on: dim. f�vr. 1 15:16:12 2015
# Project:  CatSkype.pro
# Template: app
# Command: /media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/bin/qmake -o Makefile CatSkype.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = /media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = cp -f
INSTALL_PROGRAM = cp -f
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm -f
SYMLINK       = 
DEL_DIR       = rmdir
MOVE          = mv -f
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: CatSkype.pro /media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/win32-g++/qmake.conf /media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/spec_pre.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/qdevice.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/device_config.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/common/shell-unix.conf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/qconfig.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_axbase.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_axcontainer.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_axserver.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_bootstrap.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_clucene.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_core.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_declarative.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_gui.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_help.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_multimedia.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_network.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_platformsupport.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_qml.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_qmldevtools.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_qtmultimediaquicktools.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_quick.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_quickparticles.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_script.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_scripttools.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_sensors.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_serialport.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_sql.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_svg.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_uitools.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_v8.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_xml.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_dsengine.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qgenericbearer.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qico.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qminimal.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qmldbg_inspector.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qmldbg_qtquick2.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qmldbg_tcp.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qmldbg_tcp_qtdeclarative.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qmng.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qnativewifibearer.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qoffscreen.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qsvg.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qsvgicon.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtaccessiblequick.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtaccessiblewidgets.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtga.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtiff.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtmedia_audioengine.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtmultimedia_m3u.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtsensorgestures_plugin.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtsensorgestures_shakeplugin.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtsensors_dummy.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtsensors_generic.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qwbmp.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qwindows.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_windowsprintersupport.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/qt_functions.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/qt_config.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/win32-g++/qmake.conf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/spec_post.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/exclusive_builds.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/default_pre.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/win32/default_pre.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/resolve_config.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/default_post.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/win32/rtti.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/warn_on.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/qt.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/resources.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/moc.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/win32/opengl.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/dbuscommon.pri \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/dbusinterfaces.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/dbusadaptors.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/uic.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/win32/windows.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/testcase_targets.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/exceptions.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/yacc.prf \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/lex.prf \
		CatSkype.pro \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/lib/Qt5Widgets.prl \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/lib/Qt5Gui.prl \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/lib/Qt5Core.prl \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/lib/Qt5DBus.prl \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/plugins/platforms/qwindows.prl \
		/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/lib/Qt5PlatformSupport.prl
	$(QMAKE) -o Makefile CatSkype.pro
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/spec_pre.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/qdevice.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/device_config.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/common/shell-unix.conf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/qconfig.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_axbase.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_axcontainer.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_axserver.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_bootstrap.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_clucene.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_core.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_dbus.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_declarative.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_gui.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_help.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_multimedia.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_network.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_opengl.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_platformsupport.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_qml.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_qmldevtools.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_qmltest.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_qtmultimediaquicktools.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_quick.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_quickparticles.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_script.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_scripttools.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_sensors.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_serialport.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_sql.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_svg.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_testlib.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_uitools.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_v8.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_widgets.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_xml.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_lib_xmlpatterns.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_dsengine.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qgenericbearer.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qico.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qminimal.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qmldbg_inspector.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qmldbg_qtquick2.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qmldbg_tcp.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qmldbg_tcp_qtdeclarative.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qmng.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qnativewifibearer.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qoffscreen.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qsvg.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qsvgicon.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtaccessiblequick.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtaccessiblewidgets.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtga.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtiff.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtmedia_audioengine.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtmultimedia_m3u.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtsensorgestures_plugin.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtsensorgestures_shakeplugin.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtsensors_dummy.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qtsensors_generic.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qwbmp.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_qwindows.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/modules/qt_plugin_windowsprintersupport.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/qt_functions.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/qt_config.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/win32-g++/qmake.conf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/spec_post.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/exclusive_builds.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/default_pre.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/win32/default_pre.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/resolve_config.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/default_post.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/win32/rtti.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/warn_on.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/qt.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/resources.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/moc.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/win32/opengl.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/dbuscommon.pri:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/dbusinterfaces.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/dbusadaptors.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/uic.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/win32/windows.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/testcase_targets.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/exceptions.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/yacc.prf:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/mkspecs/features/lex.prf:
CatSkype.pro:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/lib/Qt5Widgets.prl:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/lib/Qt5Gui.prl:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/lib/Qt5Core.prl:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/lib/Qt5DBus.prl:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/plugins/platforms/qwindows.prl:
/media/hipstercat/bordel/QtWin/mxe/usr/i686-pc-mingw32/qt5/lib/Qt5PlatformSupport.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile CatSkype.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first FORCE
all: release-all debug-all FORCE
clean: release-clean debug-clean FORCE
distclean: release-distclean debug-distclean FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) "/home/hipstercat/Projets QT/CatSkype/catskype_plugin_import.cpp"

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
