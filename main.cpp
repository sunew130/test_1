#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    qDebug()<<w.AreaOfTriangle(6.0f, 6.0f, 6.0f );

    return a.exec();
}
