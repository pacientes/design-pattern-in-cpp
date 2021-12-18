#include "Singleton.h"

Singleton &Singleton::getInstance()
{
    static Singleton instance;
    return instance;
}

Singleton::Singleton()
{
    m_id = 0;
}

void Singleton::setId(const int id)
{
    m_id = id;
}

int Singleton::getId() const
{
    return m_id;
}
