--- application/UpdateController.cpp.orig	2017-12-18 00:19:43 UTC
+++ application/UpdateController.cpp
@@ -90,7 +90,7 @@ void UpdateController::installUpdates()
 	qDebug() << "Installing updates.";
 #ifdef Q_OS_WIN
 	QString finishCmd = QApplication::applicationFilePath();
-#elif defined Q_OS_LINUX
+#elif defined(Q_OS_LINUX) || defined(Q_OS_FREEBSD)
 	QString finishCmd = FS::PathCombine(m_root, "MultiMC");
 #elif defined Q_OS_MAC
 	QString finishCmd = QApplication::applicationFilePath();
