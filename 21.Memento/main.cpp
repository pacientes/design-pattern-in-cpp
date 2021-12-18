#include "Originator.h"
#include "Memento.h"
#include "Message.h"
#include "Caretaker.h"

#include <iostream>

void playOriginator()
{
    std::shared_ptr<Originator> originator = std::make_shared<Originator>();

    std::shared_ptr<Message> message = std::make_shared<Message>("State1: Hello");
    std::cout << message->getMessage() << std::endl;

    originator->setState(message);
    std::shared_ptr<Memento> memento = originator->createMemento();

    message->setMessage("State2: World!");
    std::cout << message->getMessage() << std::endl;

    originator->restore(memento);
    message = originator->getState();
    std::cout << message->getMessage() << std::endl;
}

void playCaretaker()
{
    // Caretaker
    std::shared_ptr<Originator> originator = std::make_shared<Originator>();
    std::shared_ptr<Caretaker> caretaker = std::make_shared<Caretaker>();

    // first state
    std::shared_ptr<Message> message = std::make_shared<Message>("State1: Hello");
    std::cout << message->getMessage() << std::endl;

    // save
    originator->setState(message);
    caretaker->push(originator);

    // second state
    message->setMessage("State2: World!");
    std::cout << message->getMessage() << std::endl;
    originator->setState(message);
    caretaker->push(originator);

    // third state
    message->setMessage("State3: ABCDEFG");
    std::cout << message->getMessage() << std::endl;
    originator->setState(message);
    caretaker->push(originator);

    // undo
    message = caretaker->undo(originator); // state 3
    std::cout << message->getMessage() << std::endl;

    message = caretaker->undo(originator); // state 2
    std::cout << message->getMessage() << std::endl;

    message = caretaker->undo(originator); // state 1
    std::cout << message->getMessage() << std::endl;
}

int main(int argc, char *argv[])
{
    playOriginator();
    playCaretaker();
}
