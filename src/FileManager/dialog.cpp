#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

void Dialog::set_type(QString t){
    this->type = t;
}

void Dialog::set_text(QString text){
    ui->label->setText(text);
}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_Cancel_clicked()
{
    this->close();
}

void Dialog::on_Select_clicked()
{

    emit send_dialog(this->user_response, this->type);

    this->close();

}

void Dialog::on_plainTextEdit_textChanged()
{
    //update text
    this->user_response = ui->plainTextEdit->toPlainText();
}
