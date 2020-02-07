#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addressbookmodel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_Address_Book_triggered();

    void on_tableView_clicked(const QModelIndex &index);

    void on_actionExit_triggered();

    void on_Button1_clicked();

    void on_pushButton_clicked();

    void on_Button2_clicked();

    void on_Button3_clicked();

    void on_Button5_clicked();

    void on_Button4_clicked();

    void on_Button6_clicked();

    void on_Button7_clicked();

    void on_Button8_clicked();

    void on_Button9_clicked();

    void on_ButtonStar_clicked();

    void on_Button0_clicked();

    void on_ButtonPound_clicked();

    void on_ButtonPhone_clicked();

private:
    Ui::MainWindow *ui;
    addressBookModel *myModel;
    void loadImages();
    void SetButtons();
};
#endif // MAINWINDOW_H
