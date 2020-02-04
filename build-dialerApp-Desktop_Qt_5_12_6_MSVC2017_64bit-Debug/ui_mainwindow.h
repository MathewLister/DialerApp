/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Address_Book;
    QAction *actionExit;
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *label;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button4;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Button7;
    QPushButton *ButtonPound;
    QPushButton *ButtonStar;
    QPushButton *Button0;
    QPushButton *ButtonPhone;
    QMenuBar *menubar;
    QMenu *menuTools;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1091, 760);
        MainWindow->setStyleSheet(QString::fromUtf8("color: white;\n"
" background-color: #252839"));
        actionOpen_Address_Book = new QAction(MainWindow);
        actionOpen_Address_Book->setObjectName(QString::fromUtf8("actionOpen_Address_Book"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(520, 10, 481, 651));
        tableView->setStyleSheet(QString::fromUtf8("QTableView::item {\n"
"    border: .5px solid white\n"
"}"));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 461, 61));
        label->setStyleSheet(QString::fromUtf8("color: white"));
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(70, 90, 104, 104));
        Button1->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #252839;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(200, 90, 104, 104));
        Button2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #252839;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(320, 90, 104, 104));
        Button3->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #252839;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(200, 210, 104, 104));
        Button5->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #252839;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(320, 210, 104, 104));
        Button6->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #252839;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(70, 210, 104, 104));
        Button4->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #252839;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(200, 330, 104, 104));
        Button8->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #252839;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(320, 330, 104, 104));
        Button9->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #252839;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(70, 330, 104, 104));
        Button7->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #252839;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        ButtonPound = new QPushButton(centralwidget);
        ButtonPound->setObjectName(QString::fromUtf8("ButtonPound"));
        ButtonPound->setGeometry(QRect(320, 450, 104, 104));
        ButtonPound->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #252839;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        ButtonStar = new QPushButton(centralwidget);
        ButtonStar->setObjectName(QString::fromUtf8("ButtonStar"));
        ButtonStar->setGeometry(QRect(70, 450, 104, 104));
        ButtonStar->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #252839;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(200, 450, 104, 104));
        Button0->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #252839;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        ButtonPhone = new QPushButton(centralwidget);
        ButtonPhone->setObjectName(QString::fromUtf8("ButtonPhone"));
        ButtonPhone->setGeometry(QRect(200, 570, 104, 104));
        ButtonPhone->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #f2b632;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1091, 29));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuTools->menuAction());
        menuTools->addAction(actionOpen_Address_Book);
        menuTools->addSeparator();
        menuTools->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_Address_Book->setText(QApplication::translate("MainWindow", "Open Address Book...", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QApplication::translate("MainWindow", "NumDisplay                                                                  <---", nullptr));
        Button1->setText(QApplication::translate("MainWindow", "1", nullptr));
        Button2->setText(QString());
        Button3->setText(QString());
        Button5->setText(QString());
        Button6->setText(QString());
        Button4->setText(QString());
        Button8->setText(QString());
        Button9->setText(QString());
        Button7->setText(QString());
        ButtonPound->setText(QApplication::translate("MainWindow", "#", nullptr));
        ButtonStar->setText(QApplication::translate("MainWindow", "*", nullptr));
        Button0->setText(QString());
        ButtonPhone->setText(QString());
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
