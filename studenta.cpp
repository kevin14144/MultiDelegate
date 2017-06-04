#include "studenta.h"

StudentA::StudentA()
{

}

void StudentA::Update()
{
    this->AbstractObserver::Update();//Run parent method
    qDebug()<<"Student Name:" << this->_Name.c_str();
    qDebug()<<"Student Weight:" << this->_Weight;
    qDebug()<<"Student Height:" << this->_Height;

}


