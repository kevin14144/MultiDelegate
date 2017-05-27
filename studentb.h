#ifndef STUDENTB_H
#define STUDENTB_H

#include<abstracthuman.h>
#include<AbstractObserver.h>
#include<string>
#include<qdebug.h>
using namespace  std;

class StudentB : public AbstractObserver,public AbstractHuman
{
public:
    StudentB();
    StudentB(string Name,int Weight,int Height);
    void Update()
    {
        this->AbstractObserver::Update();//Run parent method
        qDebug()<<"Student Name:" << this->Name.c_str();
        qDebug()<<"Student Weight:" << this->Weight;
        qDebug()<<"Student Height:" << this->Height;
    }
    //Override method
    void SetWeight(int value)
    {
         this->Weight = value -3;
    }

};

#endif // STUDENTB_H
