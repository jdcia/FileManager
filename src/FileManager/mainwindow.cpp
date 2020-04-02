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
    path.append("");
}

void MainWindow::update_browser(){

    QString result = "";


    for(int i = 0; i < path.size(); i++){

        result.append(path[i]);

        if(i != 0){
            result.append("/");
        }

    }

    ui->directory_browser->setPlainText(result);

}

//This function will go to the directory given a string directory.
void MainWindow::goto_directory(QString directory){

    QList <QString> new_path;

    for(int i = 0; i < path.size(); i++){
        new_path.append(path[i]);
        if(path[i] == directory){
            new_path.pop_back();
            path = new_path;
            return;
        }
    }


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
    current_dir = model->fileName(index);

   goto_directory(current_dir);

   update_browser();


}

void MainWindow::on_treeView_expanded(const QModelIndex &index)
{
    last_dir = current_dir;
    current_dir = model->fileName(index);

    path.append(current_dir);

    update_browser();

}


//When clicked we need to change directory to filebrowser
void MainWindow::on_go_button_clicked()
{

}
