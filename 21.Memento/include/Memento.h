#ifndef __MEMENTO_H__
#define __MEMENTO_H__

#include "Message.h"

#include <memory>

class Memento
{
public:
    Memento(std::shared_ptr<Message> object);

    std::shared_ptr<Message> getObject() const;

private:
    std::shared_ptr<Message> m_object;
};

#endif // __MEMENTO_H__
