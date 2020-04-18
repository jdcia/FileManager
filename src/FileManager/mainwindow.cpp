#include "mainwindow.h"
#include "dialog.h"
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

void MainWindow::send_dialog(QString file, QString type){

    if(type == "new_file"){
        create_file(file);
    }
    else if(type == "new_dir"){
        create_dir(file);
    }
    else if(type == "rename_file"){
        rename_file(file);
    }
    else if (type == "remove_file"){
        remove_file(file);
    }

}

void MainWindow::create_file(QString file){
    //create file from path given

    QString new_dir = current_dir;
    new_dir.append("/");
    new_dir.append(file);

    std::cout << "create file = " << new_dir.toStdString() << "\n";



}

void MainWindow::create_dir(QString file){
    //create directory from path given



    QString new_dir = current_dir;
    new_dir.append("/");
    new_dir.append(file);

    std::cout << "create dir = " << new_dir.toStdString() << "\n";


    //QDir::mkdir(new_dir);
}

void MainWindow::rename_file(QString file){
    //rename file

    //may need to edit to take in original filename aswell.

    std::cout << "rename file = " << this->selected_file.toStdString() << " New File name = " << file.toStdString() << "\n";
}

void MainWindow::remove_file(QString file){

    if(file == "approve"){

        std::cout << "Remove file = " << this->selected_file.toStdString() << "\n";
    }


}


//QT made functions-----------------------------------------------------------------------------------



void MainWindow::on_new_directory_clicked()
{
    Dialog popup;

    popup.set_type("new_dir");

    popup.set_text("Please enter the name of the directory to be created.");

    QObject::connect(&popup, &Dialog::send_dialog, this, &MainWindow::send_dialog);

    popup.show();

    popup.exec();

}

void MainWindow::on_new_file_clicked()
{

    Dialog popup;

    popup.set_type("new_file");

    popup.set_text("Please enter the name of the file to be created.");

    QObject::connect(&popup, &Dialog::send_dialog, this, &MainWindow::send_dialog);

    popup.show();

    popup.exec();




}

void MainWindow::on_remove_clicked()
{
    Dialog popup;

    popup.set_type("remove_file");

    popup.set_text("Please type approve to delete the file.");

    QObject::connect(&popup, &Dialog::send_dialog, this, &MainWindow::send_dialog);

    popup.show();

    popup.exec();


}

void MainWindow::on_rename_clicked()
{

    Dialog popup;

    popup.set_type("rename_file");

    popup.set_text("Please enter the new name of the file.");

    QObject::connect(&popup, &Dialog::send_dialog, this, &MainWindow::send_dialog);

    popup.show();

    popup.exec();

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

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    this->selected_file = model->filePath(index);
}
