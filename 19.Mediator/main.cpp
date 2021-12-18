// main.cpp

#include "ConcreteMediator.h"
#include "ConcreteColleague.h"

int main(int argc, char *argv[])
{
    std::shared_ptr<ChatMediator> chat = std::make_shared<ChatMediator>();

    std::shared_ptr<User> kim = std::make_shared<User>(chat, "kim");
    std::shared_ptr<User> lee = std::make_shared<User>(chat, "lee");
    std::shared_ptr<User> park = std::make_shared<User>(chat, "park");

    chat->addUser(kim);
    chat->addUser(lee);
    chat->addUser(park);

    kim->sendMessage("Hello, I'm Kim");

    return 0;
}
