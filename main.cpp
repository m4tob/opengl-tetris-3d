/*
 * This code was created by Jeff Molofee 1999
 * And ported to C++/Qt4 by Wesley Stessens 2009
 *
 * Contact Jeff through his website: http://nehe.gamedev.net/
 * Contact Wesley for port-specific comments: wesley@ubuntu.com
 */

#include <QApplication>
#include <QDesktopWidget>
#include "glwidget.h"

int main(int argc, char *argv[]) {
    // Construct a new Qt application
    QApplication a(argc, argv);

    // Check for OpenGL support
    if (!QGLFormat::hasOpenGL()) {
        qDebug("Your system does not seem to support OpenGL. Cannot run this example.");
        return EXIT_FAILURE;
    }

    // Create and show our OpenGL window
    GLWidget w;
    w.setMinimumSize(600, 800);
    w.adjustSize();
    // Centraliza a janela no meio da tela
    w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());
    w.show();

    // Let's roll!
    return a.exec();
}
