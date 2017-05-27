/*2017.05.27 by YCW
 *
 * Practive Publich and Observer OO
 *
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <teacher.h>
#include <studenta.h>
#include <studentb.h>

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


typedef int (*MathFunc)(float, int);

int call_a_func(MathFunc call_this)
{
    int output = call_this(5.5, 7);
    return output;
}

int call_a_funcs(int(*call_this)(float, int))
{
    int output = call_this(5.5, 7);
    return output;
}


int do_math(float arg1, int arg2)
{
    return arg2;
}
#include<AbstractObserver.h>
void MainWindow::on_pushButton_clicked()
{
    //int result = call_a_func(do_math);

    Teacher techerChang;
    StudentA GoodStudent;
    GoodStudent.SetName("YCW");
    GoodStudent.SetWeight(60);
    GoodStudent.SetHeight(174);
    StudentB BsadStudent;
    BsadStudent.SetName("HCC");
    BsadStudent.SetWeight(50);
    BsadStudent.SetHeight(165);

    AbstractObserver* tes;//Abstract Declare
    tes  = &GoodStudent;
    techerChang.Attach(tes);
    tes = &BsadStudent;
    techerChang.Attach(tes);
    techerChang.Notify();

}



