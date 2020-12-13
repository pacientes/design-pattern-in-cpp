//#include "Observer.h"
#include "UserA.h"
#include "UserB.h"

//#include "Subject.h"
#include "ConcreteSubject.h"

int main(const int argc, const char* argv[])
{
    std::shared_ptr<ConcreteSubject> members = std::make_shared<ConcreteSubject>();

    std::shared_ptr<UserA> userA = std::make_shared<UserA>("User A");
    std::shared_ptr<UserB> userB = std::make_shared<UserB>("User B");

    members->addObserver(userA);
    members->addObserver(userB);

    members->notiObserver();

    return 0;
}
