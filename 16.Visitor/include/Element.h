#ifndef __ELEMENT_H__
#define __ELEMENT_H__

#include "Visitor.h"

#include <string>
#include <memory>

class Element
{
public:
    Element(const std::string &name, const int price, const int number);

    virtual void accept(std::shared_ptr<Visitor> visitor) = 0;

    const std::string &getName() const;

    const int getPrice() const;

    const int getNumber() const;

protected:
    std::string m_name;

    int m_price;

    int m_number;
};

#endif // __ELEMENT_H__
