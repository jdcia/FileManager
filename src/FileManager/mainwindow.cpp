#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <qfilesystemmodel.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init_tree(){

    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());

    ui->treeView->setModel(model);
}


void MainWindow::on_pushButton_clicked()
{
    std::cout << "Button1\n";
}

void MainWindow::on_pushButton_2_clicked()
{
    std::cout << "Button2\n";
}

void MainWindow::on_pushButton_3_clicked()
{
    std::cout << "Button3\n";
}

void MainWindow::on_pushButton_4_clicked()
{
    std::cout << "Button4\n";
}


