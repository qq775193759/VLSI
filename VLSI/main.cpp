#include "mainwindow.h"
#include <QApplication>

#include <linemaker.h>
#include <qdebug.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Point init(0,0);
    Point term(100,100);
    LineMaker linemaker(init, term);
    linemaker.Try();
    qDebug()<<linemaker.line_stack.size();

    return a.exec();
}
