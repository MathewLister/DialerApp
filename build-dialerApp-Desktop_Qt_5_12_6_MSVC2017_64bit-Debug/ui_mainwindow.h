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
#include <QtWidgets/QLineEdit>
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
    QLineEdit *NumDisplay;
    QPushButton *backspaceButton;
    QMenuBar *menubar;
    QMenu *menuTools;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1091, 760);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF"));
        actionOpen_Address_Book = new QAction(MainWindow);
        actionOpen_Address_Book->setObjectName(QString::fromUtf8("actionOpen_Address_Book"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(520, 10, 481, 651));
        tableView->setStyleSheet(QString::fromUtf8(""));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(60, 90, 104, 104));
        QFont font;
        font.setPointSize(10);
        Button1->setFont(font);
        Button1->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"background-color: #FFFFFF;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: #666666;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(190, 90, 104, 104));
        Button2->setFont(font);
        Button2->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"background-color: #FFFFFF;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: #666666;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(320, 90, 104, 104));
        Button3->setFont(font);
        Button3->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"background-color: #FFFFFF;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: #666666;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(190, 210, 104, 104));
        Button5->setFont(font);
        Button5->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"background-color: #FFFFFF;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: #666666;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(320, 210, 104, 104));
        Button6->setFont(font);
        Button6->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"background-color: #FFFFFF;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: #666666;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(60, 210, 104, 104));
        Button4->setFont(font);
        Button4->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"background-color: #FFFFFF;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: #666666;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(190, 330, 104, 104));
        Button8->setFont(font);
        Button8->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"background-color: #FFFFFF;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: #666666;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(320, 330, 104, 104));
        Button9->setFont(font);
        Button9->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"background-color: #FFFFFF;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: #666666;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(60, 330, 104, 104));
        Button7->setFont(font);
        Button7->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"background-color: #FFFFFF;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: #666666;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        ButtonPound = new QPushButton(centralwidget);
        ButtonPound->setObjectName(QString::fromUtf8("ButtonPound"));
        ButtonPound->setGeometry(QRect(320, 450, 104, 104));
        QFont font1;
        font1.setPointSize(20);
        ButtonPound->setFont(font1);
        ButtonPound->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"background-color: #FFFFFF;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: #666666;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        ButtonStar = new QPushButton(centralwidget);
        ButtonStar->setObjectName(QString::fromUtf8("ButtonStar"));
        ButtonStar->setGeometry(QRect(60, 450, 104, 104));
        ButtonStar->setFont(font1);
        ButtonStar->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"background-color: #FFFFFF;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: #666666;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(190, 450, 104, 104));
        Button0->setFont(font);
        Button0->setStyleSheet(QString::fromUtf8("color: #666666;\n"
"background-color: #FFFFFF;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: #666666;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        ButtonPhone = new QPushButton(centralwidget);
        ButtonPhone->setObjectName(QString::fromUtf8("ButtonPhone"));
        ButtonPhone->setGeometry(QRect(190, 570, 104, 104));
        ButtonPhone->setFont(font);
        ButtonPhone->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #3CD141;\n"
" border-style: solid;\n"
" border-width:1.5px;\n"
" border-radius:50px;\n"
" border-color: white;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;\n"
""));
        NumDisplay = new QLineEdit(centralwidget);
        NumDisplay->setObjectName(QString::fromUtf8("NumDisplay"));
        NumDisplay->setGeometry(QRect(70, 10, 341, 61));
        backspaceButton = new QPushButton(centralwidget);
        backspaceButton->setObjectName(QString::fromUtf8("backspaceButton"));
        backspaceButton->setGeometry(QRect(420, 20, 77, 52));
        backspaceButton->setStyleSheet(QString::fromUtf8(""));
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
        NumDisplay->setText(QString());
        backspaceButton->setText(QString());
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
