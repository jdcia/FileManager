#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);

    void set_type(QString type);
    void set_text(QString text);

    ~Dialog();

    QString type;
    QString user_response;

private slots:

    void on_Cancel_clicked();

    void on_Select_clicked();

    void on_plainTextEdit_textChanged();

signals:

    void send_dialog(QString filename, QString type);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
