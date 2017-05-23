#include "mainwindow.h"
#include "ui_mainwindow.h"
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

int (*pf)(int);
typedef int (*MathFunc)(float, int);

int call_a_func(MathFunc call_this)
{
    int output = call_this(5.5, 7);
    return output;
}

int call_a_funcs(int (*call_this)(float, int))
{
    int output = call_this(5.5, 7);
    return output;
}


int do_math(float arg1, int arg2)
{
    return arg2;
}

void MainWindow::on_pushButton_clicked()
{
    int result = call_a_func(do_math);
}
