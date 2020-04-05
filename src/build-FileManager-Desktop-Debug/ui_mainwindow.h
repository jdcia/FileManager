/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *new_directory;
    QPushButton *new_file;
    QPushButton *remove;
    QPushButton *rename;
    QTreeView *treeView;
    QLabel *label;
    QPushButton *go_button;
    QPlainTextEdit *directory_browser;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(582, 326);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        new_directory = new QPushButton(centralWidget);
        new_directory->setObjectName(QString::fromUtf8("new_directory"));
        new_directory->setGeometry(QRect(0, 30, 91, 71));
        QFont font;
        font.setPointSize(10);
        new_directory->setFont(font);
        new_file = new QPushButton(centralWidget);
        new_file->setObjectName(QString::fromUtf8("new_file"));
        new_file->setGeometry(QRect(0, 100, 91, 71));
        new_file->setFont(font);
        remove = new QPushButton(centralWidget);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setGeometry(QRect(0, 170, 91, 61));
        remove->setFont(font);
        rename = new QPushButton(centralWidget);
        rename->setObjectName(QString::fromUtf8("rename"));
        rename->setGeometry(QRect(0, 230, 91, 61));
        rename->setFont(font);
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(90, 30, 491, 261));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 101, 31));
        label->setFrameShape(QFrame::StyledPanel);
        go_button = new QPushButton(centralWidget);
        go_button->setObjectName(QString::fromUtf8("go_button"));
        go_button->setGeometry(QRect(530, 0, 51, 31));
        directory_browser = new QPlainTextEdit(centralWidget);
        directory_browser->setObjectName(QString::fromUtf8("directory_browser"));
        directory_browser->setGeometry(QRect(90, 0, 441, 31));
        directory_browser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        directory_browser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setFont(font);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        new_directory->setText(QApplication::translate("MainWindow", "New Directory", nullptr));
        new_file->setText(QApplication::translate("MainWindow", "New File", nullptr));
        remove->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        rename->setText(QApplication::translate("MainWindow", "Rename", nullptr));
        label->setText(QApplication::translate("MainWindow", "Directory", nullptr));
        go_button->setText(QApplication::translate("MainWindow", "Go", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
