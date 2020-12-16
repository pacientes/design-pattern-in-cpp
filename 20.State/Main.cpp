#include "State.h"
#include "StateFinish.h"
#include "StateOrder.h"
#include "StateOrdered.h"
#include "StatePay.h"

#include "Context.h"

int main(const int argc, const char* argv[])
{
    std::shared_ptr<Context> context = std::make_shared<Context>(std::make_shared<StateOrder>());
    context->request();

    context->setState(std::make_shared<StatePay>());
    context->request();

    return 0;
}
