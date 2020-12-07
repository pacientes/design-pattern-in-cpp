#include <iostream>

#include "Component.h"
#include "ConcreteComponent1.h"
#include "ConcreteComponent2.h"

#include "Decorator.h"
#include "ConcreateDecorator1.h"
#include "ConcreateDecorator2.h"

int main(const int argc, const char* argv[])
{

    std::shared_ptr<Component> p = std::make_shared<ConcreateDecorator2>(
        std::make_shared<ConcreateDecorator1>(
        std::make_shared<Decorator>(
        std::make_shared<ConcreteComponent1>()))
        );

    std::cout << p->product() << std::endl;
    std::cout << p->price() << std::endl;

    return 0;
}
