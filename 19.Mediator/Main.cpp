#include "User.h"
#include "chatMediator.h"


int main(const int argc, const char* argv[])
{
    std::shared_ptr<chatMediator> chat = std::make_shared<chatMediator>();

    std::shared_ptr<User> kim = std::make_shared<User>(chat, "kil");
    std::shared_ptr<User> lee = std::make_shared<User>(chat, "lee");
    std::shared_ptr<User> park = std::make_shared<User>(chat, "park");

    chat->addUser(kim);
    chat->addUser(lee);
    chat->addUser(park);

    kim->sendMessage("Hello, I'm Kim");

    return 0;
}
