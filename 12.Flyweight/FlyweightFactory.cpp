#include "FlyweightFactory.h"

#include "Morse.h"

std::shared_ptr<Flyweight> FlyweightFactory::getCode(const int key)
{
    if (m_list.find(key) == m_list.end())
    {
        if (key == 'g')
        {
            m_list[key] = std::make_shared<MorseG>();
        }

        if (key == 'o')
        {
            m_list[key] = std::make_shared<MorseO>();
        }

        if (key == 'l')
        {
            m_list[key] = std::make_shared<MorseL>();
        }

        if (key == 'e')
        {
            m_list[key] = std::make_shared<MorseE>();
        }
    }

    return m_list[key];
}
