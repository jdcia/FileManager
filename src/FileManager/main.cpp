#include "mainwindow.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.init_tree();

    QObjectList x = w.children();


    for(int i = 0; i < x.size(); i++){
        std::cout << x.takeAt(i)->objectName().toStdString() << "\n";
    }


    w.show();

    return a.exec();
}
