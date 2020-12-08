#include "ConcreateAggregate.h"
#include "IteratorObject.h"
#include "Fruit.h"

#include <iostream>

int main(const int argc, const char* argv[])
{
    std::shared_ptr<ConcreateAggregate> menu = std::make_shared<ConcreateAggregate>();
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
