#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <string>

class Observer
{
public:
    virtual void update() = 0;

protected:
    std::string m_name;
};

#endif // __OBSERVER_H__
