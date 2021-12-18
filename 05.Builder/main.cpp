#include "Builder.h"
#include "Computer.h"
#include "Director.h"

int main(int argc, char *argv[])
{
    std::shared_ptr<Director> director = std::make_shared<Director>(std::make_shared<Builder>());
    std::shared_ptr<Computer> computer = director->create();

    computer->showInformation();

    return 0;
}
