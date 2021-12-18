#include "Cart.h"
#include "ConcreteVisitor.h"

#include <iostream>

int main(int argc, char *argv[])
{
    std::shared_ptr<Element> noodle = std::make_shared<Cart>("Noodle", 900, 2);
    std::shared_ptr<Element> cola = std::make_shared<Cart>("CocaCola", 600, 4);
    std::shared_ptr<ConcreteVisitor> visitor = std::make_shared<ConcreteVisitor>();
    noodle->accept(visitor);
    cola->accept(visitor);

    std::cout << "Total: " << std::to_string(visitor->getTotal()) << std::endl;

    return 0;
}
