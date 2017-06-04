#ifndef STUDENTA_H
#define STUDENTA_H

#include<AbstractObserver.h>
#include<abstracthuman.h>
#include<string>
#include<qdebug.h>

using namespace std;

class StudentA : public AbstractObserver, public AbstractHuman
{
public:

    // It will run the AbstractObserver's constructor
    // and AbstractHuman's constructor
    // when the class be instanting.(instantiation: Class to Object)
    StudentA();

    StudentA(string Name, int Weight, int Height):AbstractHuman(Name,Weight,Height)
    {
        //Initial
    }

    ///
    /// \brief Update State
    /// Override virtual function
    void Update();

};

#endif // STUDENTA_H
