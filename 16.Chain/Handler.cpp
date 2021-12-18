#include "Handler.h"
#include "Order.h"
#include "Cancel.h"

const std::string Handler::event(const std::string event)
{
    // 어딘가 부족한 코드...
    auto handler = std::make_shared<Order>();
    handler->setNext(std::make_shared<Cancel>());

    return handler->execute(event);
}
