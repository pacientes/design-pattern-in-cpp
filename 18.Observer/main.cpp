#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

int main(int argc, char *argv[])
{
    std::shared_ptr<ConcreteSubject> members = std::make_shared<ConcreteSubject>();

    std::shared_ptr<ConcreteObserverA> userA = std::make_shared<ConcreteObserverA>("User A");
    std::shared_ptr<ConcreteObserverB> userB = std::make_shared<ConcreteObserverB>("User B");

    members->addObserver(userA);
    members->addObserver(userB);

    members->notiObserver();

    return 0;
}
