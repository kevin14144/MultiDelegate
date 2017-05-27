#ifndef OBSERVER_H
#define OBSERVER_H


class AbstractObserver
{
public:
    AbstractObserver();
    ///
    /// \brief Update the observer state
    ///
    void virtual Update();
    ///
    /// \brief operator == overload the const object
    /// \param other
    /// \return
    ///
    bool operator==( const AbstractObserver& other ) const{};
};

#endif // OBSERVER_H
