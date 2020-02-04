#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , myModel(new addressBookModel(this))
{
    ui->setupUi(this);
    ui->tableView->setModel(myModel);
    SetButtons();
    loadImages();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_Address_Book_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                   tr("Open Address Book"), "",
                                                   tr("Address Book (*.csv);;All Files (*)"));
    std::cout << fileName.toStdString() << std::endl;

    myModel->openFile(fileName);
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    std::cout << index.row() << "," << index.column() << std::endl;
    ui->label->setText(myModel->getPhoneNumber(index.row()));
}

void MainWindow::SetButtons()
{
    ui->Button2->setText("2\nABC");
    ui->Button3->setText("3\nDEF");
    ui->Button4->setText("4\nGHI");
    ui->Button5->setText("5\nJKL");
    ui->Button6->setText("6\nMNO");
    ui->Button7->setText("7\nPQRS");
    ui->Button8->setText("8\nTUV");
    ui->Button9->setText("9\nWXYZ");
    ui->Button0->setText("0\n+");

}

//Close the app
void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::loadImages()
{
    QPixmap phoneIconFileName(":/Images/phoneIcon.png");
    QIcon phoneIcon(phoneIconFileName);
    phoneIcon.addPixmap(phoneIconFileName, QIcon::Normal, QIcon::Off);
    ui->ButtonPhone->setIcon(phoneIcon);
    ui->ButtonPhone->setIconSize(QSize(300, 300));
}













