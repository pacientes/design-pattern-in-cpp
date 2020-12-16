#include "State.h"
#include "StateFinish.h"
#include "StateOrder.h"
#include "StateOrdered.h"
#include "StatePay.h"

#include "Context.h"

// Additional example
#include "LightState.h"

int main(const int argc, const char* argv[])
{
    std::shared_ptr<Context> context = std::make_shared<Context>(std::make_shared<StateOrder>());
    context->request();

    context->setState(std::make_shared<StatePay>());
    context->request();

    std::shared_ptr<LightLamp> lamp = std::make_shared<LightLamp>();
    lamp->on();

    return 0;
}
