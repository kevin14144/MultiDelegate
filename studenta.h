#ifndef STUDENTA_H
#define STUDENTA_H

#include<AbstractObserver.h>
#include<abstracthuman.h>
#include<string>
#include<qdebug.h>

using namespace std;

class StudentA : public AbstractObserver,public AbstractHuman
{
public:
    StudentA();
    StudentA(string Name,int Weight,int Height);
    //override AbstractObserver function
    void Update()
    {
        this->AbstractObserver::Update();//Run parent method
        qDebug()<<"Student Name:" << this->Name.c_str();
        qDebug()<<"Student Weight:" << this->Weight;
        qDebug()<<"Student Height:" << this->Height;
    }

};

#endif // STUDENTA_H
