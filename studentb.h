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

    StudentB(string Name,int Weight,int Height):AbstractHuman(Name,Weight,Height)
    {
    }

    ///
    /// \brief Update State
    ///
    /// Override virtual function
    void Update();

    ///
    /// \brief SetWeight
    /// \param value
    /// Override virtual function
    void SetWeight(int value)
    {
         this->_Weight = value -3;
    }

};

#endif // STUDENTB_H
