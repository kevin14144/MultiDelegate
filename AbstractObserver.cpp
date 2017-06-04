#include "AbstractObserver.h"
#include <QDebug>
AbstractObserver::AbstractObserver()
{

}

void AbstractObserver::Update()
{
    qDebug()<<"Org update message.";
}
