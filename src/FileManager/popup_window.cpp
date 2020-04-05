#include "popup_window.h"
#include "ui_popup_window.h"
#include <QDialog>

popup_window::popup_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popup_window)
{
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);
}

    secDialog::~secDialog()
    {
        delete ui;
    }

