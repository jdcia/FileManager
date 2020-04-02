#include "mainwindow.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.init_tree();

    QObjectList x = w.children();

    w.show();

    return a.exec();
}
