#include "ConcreteVisitor.h"
#include "Cart.h"

#include <string>

int main(const int argc, const char* argv[])
{
    Cart* noodle = new Cart("Noodle", 900, 2);
    Cart* cola = new Cart("CocaCola", 600, 4);
    ConcreteVisitor* visitor = new ConcreteVisitor();
    noodle->accept(visitor);
    cola->accept(visitor);

    std::cout << "Total: " << std::to_string(visitor->getTotal()) << std::endl;
}
