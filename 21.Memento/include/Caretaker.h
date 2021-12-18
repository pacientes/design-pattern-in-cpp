#ifndef __CARETAKER_H__
#define __CARETAKER_H__

#include "Memento.h"
#include "Originator.h"

#include <stack>

class Caretaker
{
public:
    void push(std::shared_ptr<Originator> originator);

    std::shared_ptr<Message> undo(std::shared_ptr<Originator> originator);

private:
    std::stack<std::shared_ptr<Memento>> m_stack;
};

#endif // __CARETAKER_H__
