#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include "Observer.h"

#include <memory>

class Subject
{
public:
    virtual void addObserver(std::shared_ptr<Observer> observer) = 0;
    virtual void deleteObserver(std::shared_ptr<Observer> observer) = 0;
    virtual void notiObserver() = 0;
};

#endif // __SUBJECT_H__
