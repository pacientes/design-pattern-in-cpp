#ifndef __CONCRETE_OBSERVER_H__
#define __CONCRETE_OBSERVER_H__

#include "Observer.h"

#include <string>

class ConcreteObserverA : public Observer
{
public:
    ConcreteObserverA(const std::string &name);

    virtual void update() override;
};

class ConcreteObserverB : public Observer
{
public:
    ConcreteObserverB(const std::string &name);

    virtual void update() override;
};

#endif // __CONCRETE_OBSERVER_H__
