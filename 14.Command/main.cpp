#include "CommandA.h"
#include "CommandB.h"
#include "Receiver.h"
#include "Invoker.h"

int main(int argc, char *argv[])
{
    std::shared_ptr<CommandA> command_a = std::make_shared<CommandA>();

    std::shared_ptr<Receiver> receiver = std::make_shared<Receiver>();
    std::shared_ptr<CommandB> command_b = std::make_shared<CommandB>(receiver);

    std::shared_ptr<Invoker> invoker = std::make_shared<Invoker>();
    invoker->setCommand("cmd1", command_a);
    invoker->setCommand("cmd2", command_b);

    invoker->execute("cmd1");
    invoker->execute("cmd2");

    return 0;
}
