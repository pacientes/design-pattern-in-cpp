#include "NonTerminal.h"
#include "Terminal.h"

NonTerminal::NonTerminal(const std::string &left, const std::string &right)
{
    m_left = std::make_shared<Terminal>(left);
    m_right = std::make_shared<Terminal>(right);
}

std::string NonTerminal::interpret()
{
    int left = std::atoi(m_left->interpret().c_str());
    int right = std::atoi(m_right->interpret().c_str());

    return std::to_string(left + right);
}
