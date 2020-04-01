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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFile;
    QAction *actionSearch;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionRemove_File_Directory;
    QAction *actionNew_FIle;
    QAction *actionNew_Directory;
    QAction *actionUndo_2;
    QAction *actionRedo_2;
    QAction *actionSearch_For_Folder;
    QAction *actionSearch_For_File;
    QAction *actionSearch_by_Keyword;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTreeView *treeView;
    QMenuBar *menuBar;
    QMenu *menuFileManager;
    QMenu *menuEdit;
    QMenu *menuSearch;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(582, 325);
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionRemove_File_Directory = new QAction(MainWindow);
        actionRemove_File_Directory->setObjectName(QString::fromUtf8("actionRemove_File_Directory"));
        actionNew_FIle = new QAction(MainWindow);
        actionNew_FIle->setObjectName(QString::fromUtf8("actionNew_FIle"));
        actionNew_Directory = new QAction(MainWindow);
        actionNew_Directory->setObjectName(QString::fromUtf8("actionNew_Directory"));
        actionUndo_2 = new QAction(MainWindow);
        actionUndo_2->setObjectName(QString::fromUtf8("actionUndo_2"));
        actionRedo_2 = new QAction(MainWindow);
        actionRedo_2->setObjectName(QString::fromUtf8("actionRedo_2"));
        actionSearch_For_Folder = new QAction(MainWindow);
        actionSearch_For_Folder->setObjectName(QString::fromUtf8("actionSearch_For_Folder"));
        actionSearch_For_File = new QAction(MainWindow);
        actionSearch_For_File->setObjectName(QString::fromUtf8("actionSearch_For_File"));
        actionSearch_by_Keyword = new QAction(MainWindow);
        actionSearch_by_Keyword->setObjectName(QString::fromUtf8("actionSearch_by_Keyword"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 91, 71));
        QFont font;
        font.setPointSize(10);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 70, 91, 71));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 140, 91, 61));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 200, 91, 61));
        pushButton_4->setFont(font);
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(90, 0, 491, 271));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 582, 22));
        menuFileManager = new QMenu(menuBar);
        menuFileManager->setObjectName(QString::fromUtf8("menuFileManager"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuSearch = new QMenu(menuBar);
        menuSearch->setObjectName(QString::fromUtf8("menuSearch"));
        MainWindow->setMenuBar(menuBar);
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

        menuBar->addAction(menuFileManager->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuSearch->menuAction());
        menuFileManager->addAction(actionFile);
        menuFileManager->addAction(actionUndo);
        menuEdit->addAction(actionRemove_File_Directory);
        menuEdit->addAction(actionNew_FIle);
        menuEdit->addAction(actionNew_Directory);
        menuEdit->addAction(actionUndo_2);
        menuEdit->addAction(actionRedo_2);
        menuSearch->addAction(actionSearch_For_Folder);
        menuSearch->addAction(actionSearch_For_File);
        menuSearch->addAction(actionSearch_by_Keyword);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionFile->setText(QApplication::translate("MainWindow", "Open Folder", nullptr));
        actionSearch->setText(QApplication::translate("MainWindow", "Search", nullptr));
        actionUndo->setText(QApplication::translate("MainWindow", "Open File", nullptr));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
        actionRemove_File_Directory->setText(QApplication::translate("MainWindow", "Remove File/Directory", nullptr));
        actionNew_FIle->setText(QApplication::translate("MainWindow", "New FIle", nullptr));
        actionNew_Directory->setText(QApplication::translate("MainWindow", "New Directory", nullptr));
        actionUndo_2->setText(QApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo_2->setText(QApplication::translate("MainWindow", "Redo", nullptr));
        actionSearch_For_Folder->setText(QApplication::translate("MainWindow", "Search For Folder", nullptr));
        actionSearch_For_File->setText(QApplication::translate("MainWindow", "Search For File", nullptr));
        actionSearch_by_Keyword->setText(QApplication::translate("MainWindow", "Search by Keyword", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "New Directory", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "New File", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Undo", nullptr));
        menuFileManager->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuSearch->setTitle(QApplication::translate("MainWindow", "Search", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
