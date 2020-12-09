#pragma once

#include "Chain.h"

class Order :
    public Chain
{
public:
    std::string execute(std::string event) override
    {
        if (event == "order")
            return "[Order] execute";

        // 책임 연쇄 패턴의 핵심
        return m_next->execute(event);
    }
};
