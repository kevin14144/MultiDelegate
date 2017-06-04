/*2017.06.05 by YCW
 *
 * Practive Publich and Observer OO
 *
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <teacher.h>
#include <studenta.h>
#include <studentb.h>
#include <AbstractObserver.h>

//design pattern
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

///
/// \brief  Publich and Observer , use imhernterce
///
void MainWindow::on_pushButton_clicked()
{
    Teacher techerChang;
    StudentA GoodStudent("YCW",60,174);

    StudentB BsadStudent;
    BsadStudent.SetName("HCC");
    BsadStudent.SetWeight(50);//Actually Weight is x-3
    BsadStudent.SetHeight(165);

    AbstractObserver* tes;//Abstract Declare
    tes  = &GoodStudent;
    techerChang.Attach(tes);
    tes = &BsadStudent;
    techerChang.Attach(tes);
    techerChang.Notify();

}



