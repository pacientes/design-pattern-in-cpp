#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"

#include <iostream>

int main(int argc, char *argv[])
{
    std::shared_ptr<ConcreteAggregate> menu = std::make_shared<ConcreteAggregate>();
    menu->addFruit("Apple");
    menu->addFruit("Orange");
    menu->addFruit("Melon");
    menu->addFruit("Banana");

    std::shared_ptr<Iterator> iter = menu->createIterator();
    while (iter->isDone())
    {
        auto item = iter->next();
        std::cout << item->getName() << std::endl;
    }

    return 0;
}
