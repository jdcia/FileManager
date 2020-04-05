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


//User Functions-----------------------------------------------------------------------------------

/**
 * @brief MainWindow::init_tree
 * Will be used to update and initialize tree with nodes.
 */
void MainWindow::init_tree(){

    MainWindow::model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());


    ui->treeView->setModel(model);
    last_dir = "";
    current_dir = "";

    goto_directory(QDir::currentPath());
}

void MainWindow::update_browser(){

    ui->directory_browser->setPlainText(current_dir.toUtf8());

}

void MainWindow::update_tree(){
    MainWindow::model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());


    ui->treeView->setModel(model);
}

void MainWindow::goto_directory(QString directory){

    //Reset tree model then open folders based on path

    int depth = 1;

    QList <QString> temp_path = directory.split("/");

    depth += temp_path.size();

    //reset tree
    ui->treeView->reset();

    ui->treeView->expandToDepth(depth);

    last_dir = current_dir;
    current_dir = directory;

    update_browser();


}


//QT made functions-----------------------------------------------------------------------------------



void MainWindow::on_new_directory_clicked()
{


}

void MainWindow::on_new_file_clicked()
{

}

void MainWindow::on_remove_clicked()
{



}

void MainWindow::on_rename_clicked()
{



}

void MainWindow::on_treeView_collapsed(const QModelIndex &index)
{
    //Qstring location = valuablePathAskedFor(fileStStemModel.fileName(index))
   last_dir = current_dir;
   current_dir = model->filePath(index);

   update_browser();


}

void MainWindow::on_treeView_expanded(const QModelIndex &index)
{
    last_dir = current_dir;
    current_dir = model->filePath(index);

    update_browser();

}


//When clicked we need to change directory to filebrowser
void MainWindow::on_go_button_clicked()
{

    goto_directory(ui->directory_browser->placeholderText());

}
