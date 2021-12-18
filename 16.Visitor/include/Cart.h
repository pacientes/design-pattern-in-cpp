#ifndef __CART_H__
#define __CART_H__

#include "Element.h"

class Cart : public Element, public std::enable_shared_from_this<Cart>
{
public:
    Cart(const std::string &name, const int price, const int number = 1);

    virtual void accept(std::shared_ptr<Visitor> visitor) override;

    int getTax(const int tax = 10);

    const std::string getProductList();
};

#endif // __CART_H__
