#ifndef SUBJECT_H
#define SUBJECT_H

#include <AbstractObserver.h>
#include <list>

using namespace std;

class AbstractSubject
{
public:

    AbstractSubject();
    //write here to become inline function
    ///
    /// \brief Attach observer
    /// \param observer object
    ///
    void virtual Attach(AbstractObserver* observer)
    {
        observerCollection.push_back(observer);
    }

    ///
    /// \brief Detach the observer
    /// \param observer object
    ///
    void virtual Detach(AbstractObserver* observer)
    {
        observerCollection.remove(observer);
    }

    ///
    /// \brief Notify the observers
    ///
    void virtual Notify()
    {

        //Foreach
        //1
        for(AbstractObserver* observer : observerCollection)
        {
            observer->Update();
        }
        //2
        //for(list<Observer>::iterator observer = observerCollection.begin(); observer != observerCollection.end() ; ++observer)
        //{
        //    observer->Update();
        //}
    }

private:
    list<AbstractObserver*> observerCollection;


};

#endif // SUBJECT_H
