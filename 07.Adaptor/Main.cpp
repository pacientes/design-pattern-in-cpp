#include "Objects.h"

int main(const int argc, const char* argv[])
{
    std::shared_ptr<Objects> object = std::make_shared<Objects>();
    int numA = object->twoTime(5);
    float numB = object->twoTime(4.0f);

    int numC = object->halfTime(5);
    float numD = object->halfTime(4.0f);

    return 0;
}
