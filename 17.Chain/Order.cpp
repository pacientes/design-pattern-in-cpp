#include "Order.h"

const std::string Order::execute(const std::string event)
{
    if (event == "order")
        return "[Order] execute";

    // 책임 연쇄 패턴의 핵심
    return m_next->execute(event);
}
