#include "Adapter.h"

#include <iostream>

int main(int argc, char *argv[])
{
    std::shared_ptr<Target> adapter = std::make_shared<Adapter>();
    int num_a = adapter->twoTime(5);
    std::cout << "[int] num_a is " << num_a << std::endl;

    float num_b = adapter->twoTime(4.0f);
    std::cout << "[float] num_b is " << num_b << std::endl;

    int num_c = adapter->halfTime(5);
    std::cout << "[int] num_c is " << num_c << std::endl;

    float num_d = adapter->halfTime(4.0f);
    std::cout << "[float] num_d is " << num_d << std::endl;

    return 0;
}
