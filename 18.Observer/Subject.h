#pragma once

#include "Observer.h"

#include <memory>

class Subject
{
public:
    virtual void addObserver(std::shared_ptr<Observer> observer) = 0;
    virtual void deleteObserver(std::shared_ptr<Observer> observer) = 0;
    virtual void notiObserver() = 0;
};
