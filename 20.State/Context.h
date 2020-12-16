#pragma once

#include "State.h"
#include <memory>

class Context
{
public:
    Context(std::shared_ptr<State> state)
    {
        m_state = state;
    }

    void setState(std::shared_ptr<State> state)
    {
        if (m_state)
        {
            m_state.reset();
        }

        m_state = state;
    }

    void request()
    {
        m_state->process();
    }

private:
    std::shared_ptr<State> m_state;
};
