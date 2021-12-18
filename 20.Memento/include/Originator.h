#ifndef __ORIGINATOR_H__
#define __ORIGINATOR_H__

#include "Memento.h"
#include "Message.h"

class Originator
{
public:
    std::shared_ptr<Memento> createMemento();

    void restore(std::shared_ptr<Memento> memento);

    std::shared_ptr<Message> getState() const;

    void setState(const std::shared_ptr<Message> state);

protected:
    std::shared_ptr<Message> m_state;
};

#endif // __ORIGINATOR_H__
