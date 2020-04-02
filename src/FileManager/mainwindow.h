#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qfilesystemmodel.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //Variables
    QString last_dir;
    QString current_dir;
    QList<QString> path;
    QFileSystemModel *model;

    //Need to reorganize this.

    //Functions
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void init_tree();
    void goto_directory(QString directory);
    void update_browser();

private slots:

    void on_new_directory_clicked();

    void on_new_file_clicked();

    void on_remove_clicked();

    void on_rename_clicked();

    void on_treeView_collapsed(const QModelIndex &index);

    void on_treeView_expanded(const QModelIndex &index);


    void on_go_button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
