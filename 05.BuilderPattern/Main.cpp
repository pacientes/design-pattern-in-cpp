#include "Builder.h"
#include "Computer.h"
#include "Director.h"

int main(const int argc, const char* argv[])
{
    std::shared_ptr<Director> director = std::make_shared<Director>(std::make_shared<Builder>());
    std::shared_ptr<Computer> computer = director->construct();

    computer->showInfo();

    return 0;
}
