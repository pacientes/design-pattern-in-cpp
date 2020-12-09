#pragma once

#include "Chain.h"

class Cancel :
    public Chain
{
public:
    std::string execute(std::string event) override
    {
        if (event == "cancel")
            return "[Cancel] execute";

        // 책임 연쇄 패턴의 핵심
        return m_next->execute(event);
    }
};
