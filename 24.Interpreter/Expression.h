#pragma once

#include <string>
#include <memory>

class Expression
{
public:
    virtual std::string interpret() = 0;
};

// Terminal (Concrete Expression)
class Terminal :
    public Expression
{
public:
    Terminal(std::string n)
    {
        m_n = n;
    }

    std::string interpret()
    {
        return m_n;
    }

private:
    std::string m_n;
};

// Non-Terminal (Concrete Expression)
class Add :
    public Expression
{
public:
    Add(std::string left, std::string right)
    {
        m_left = std::make_shared<Terminal>(left);
        m_right = std::make_shared<Terminal>(right);
    }

    std::string interpret() override
    {
        int left = std::atoi(m_left->interpret().c_str());
        int right = std::atoi(m_right->interpret().c_str());

        return std::to_string(left + right);
    }

private:
    std::shared_ptr<Expression> m_left;
    std::shared_ptr<Expression> m_right;
};
