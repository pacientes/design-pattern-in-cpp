#include "Terminal.h"

Terminal::Terminal(std::string n)
{
    m_n = n;
}

std::string Terminal::interpret()
{
    return m_n;
}
