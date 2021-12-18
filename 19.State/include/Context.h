#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include "State.h"

#include <memory>

class Context
{
public:
    Context(std::shared_ptr<State> state);

    void setState(std::shared_ptr<State> state);

    void request();

private:
    std::shared_ptr<State> m_state;
};

#endif // __CONTEXT_H__
