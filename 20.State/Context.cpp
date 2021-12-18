#include "Context.h"

Context::Context(std::shared_ptr<State> state)
{
    m_state = state;
}

void Context::setState(std::shared_ptr<State> state)
{
    if (m_state)
    {
        m_state.reset();
    }
    m_state = state;
}

void Context::request()
{
    m_state->process();
}
