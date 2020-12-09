#pragma once

#include <string>
#include <memory>

class Element;

class Visitor
{
public:
    virtual void order(Element* visitable) = 0;
};

class Element
{
public:
    Element(std::string name, int price, int num) :
        m_name(name),
        m_price(price),
        m_num(num)
    {
    }

    virtual void accept(Visitor* visitor) = 0;

    // 실제 구현 함수에서 작성해도 된다.
    void setName(std::string name)
    {
        m_name = name;
    }

    std::string getName() const
    {
        return m_name;
    }

    void setPrice(int price)
    {
        m_price = price;
    }

    int getPrice() const
    {
        return m_price;
    }

    void setNum(int num)
    {
        m_num = num;
    }

    int getNum() const
    {
        return m_num;
    }

protected:
    std::string m_name;
    int m_price;
    int m_num;
};
