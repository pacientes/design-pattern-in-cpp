#include "Directory.h"
#include "File.h"

int main(int argc, char *argv[])
{
    auto directory_red = std::make_shared<Directory>("Red");
    auto directory_green = std::make_shared<Directory>("Green");
    auto directory_blue = std::make_shared<Directory>("Blue");

    auto directory_black = std::make_shared<Directory>("Black");
    auto directory_white = std::make_shared<Directory>("White");

    directory_black->addNode(std::make_shared<File>("A"));
    directory_black->addNode(std::make_shared<File>("B"));
    directory_black->addNode(std::make_shared<File>("C"));

    directory_red->addNode(directory_green);
    directory_green->addNode(directory_blue);
    directory_blue->addNode(directory_black);

    directory_blue->addNode(directory_white);
    directory_white->addNode(std::make_shared<File>("D"));
    directory_white->addNode(std::make_shared<File>("E"));

    directory_red->print();

    return 0;
}
