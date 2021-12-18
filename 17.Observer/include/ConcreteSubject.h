#ifndef __CONCRETE_SUBJECT_H__
#define __CONCRETE_SUBJECT_H__

#include "Subject.h"

#include <vector>

class ConcreteSubject : public Subject
{
public:
    virtual void addObserver(std::shared_ptr<Observer> observer) override;

    virtual void deleteObserver(std::shared_ptr<Observer> observer) override;

    virtual void notiObserver() override;

private:
    std::vector<std::shared_ptr<Observer>> m_observers;
};

#endif // __CONCRETE_SUBJECT_H__
