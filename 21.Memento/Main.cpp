#include "Hello.h"
#include "Memento.h"

#include "Originator.h"
#include "CareTaker.h"

#include <iostream>

int main(const int argc, const char* argv[])
{
    ////Originator
    //std::shared_ptr<Originator> originator = std::make_shared<Originator>();

    //// first state
    //std::shared_ptr<Hello> hello = std::make_shared<Hello>("State1: Hello");
    //std::cout << hello->getMessage() << std::endl;

    //// save
    //originator->setState(hello);
    //std::shared_ptr<Memento> memento = originator->createMemento();

    //// second state
    //hello->setMessage("State2: World!");
    //std::cout << hello->getMessage() << std::endl;

    //// restore
    //originator->restore(memento);
    //hello = originator->getState();
    //std::cout << hello->getMessage() << std::endl;

    // CareTaker
    std::shared_ptr<Originator> originator = std::make_shared<Originator>();
    std::shared_ptr<CareTaker> careTaker = std::make_shared<CareTaker>();

    // first state
    std::shared_ptr<Hello> hello = std::make_shared<Hello>("State1: Hello");
    std::cout << hello->getMessage() << std::endl;

    // save
    originator->setState(hello);
    careTaker->push(originator);

    // second state
    hello->setMessage("State2: World!");
    std::cout << hello->getMessage() << std::endl;
    originator->setState(hello);
    careTaker->push(originator);

    // third state
    hello->setMessage("State3: ABCDEFG");
    std::cout << hello->getMessage() << std::endl;
    originator->setState(hello);
    careTaker->push(originator);

    // undo
    hello = careTaker->undo(originator); // state 3
    std::cout << hello->getMessage() << std::endl;

    hello = careTaker->undo(originator); // state 2
    std::cout << hello->getMessage() << std::endl;

    hello = careTaker->undo(originator); // state 1
    std::cout << hello->getMessage() << std::endl;

    return 0;
}
