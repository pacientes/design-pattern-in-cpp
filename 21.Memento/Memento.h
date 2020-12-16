#pragma once

#include "Hello.h"
#include <memory>

class Memento
{
public:
    Memento(std::shared_ptr<Hello> object)
    {
        m_object = object;
    }

    std::shared_ptr<Hello> getObject() const
    {
        return m_object;
    }

protected:
    std::shared_ptr<Hello> m_object;
};
