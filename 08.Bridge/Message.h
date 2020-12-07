#pragma once

#include "Language.h"

class Message :
    public Language
{
public:
    Message(std::shared_ptr<Hello> language)
    {
        m_Impl = language;
    }

    std::string execute() override
    {
        return m_Impl->greeting();
    }
};
