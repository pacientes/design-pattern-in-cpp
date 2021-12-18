#include "ConcreteState.h"
#include "Context.h"

int main(int argc, char *argv[])
{
    std::shared_ptr<Context> context = std::make_shared<Context>(std::make_shared<Order>());
    context->request();

    context->setState(std::make_shared<Pay>());
    context->request();

    return 0;
}
