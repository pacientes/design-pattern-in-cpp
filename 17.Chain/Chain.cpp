#include "Chain.h"

void Chain::setNext(std::shared_ptr<Chain> next)
{
    m_next = next;
}
