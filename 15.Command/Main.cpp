#include "Command.h"
#include "Recevier.h"
#include "Invoker.h"

#include "Exec1.h"
#include "Exec2.h"

#include <memory>

int main(const int argc, const char* argv[])
{
    std::shared_ptr<Exec1> exec1 = std::make_shared<Exec1>();

    std::shared_ptr<Recevier> receiver = std::make_shared<Recevier>();
    std::shared_ptr<Exec2> exec2 = std::make_shared<Exec2>(receiver);

    std::shared_ptr<Invoker> invoker = std::make_shared<Invoker>();
    invoker->setCommand("cmd1", exec1);
    invoker->setCommand("cmd2", exec2);

    invoker->execute("cmd1");
    invoker->execute("cmd2");

    return 0;
}
