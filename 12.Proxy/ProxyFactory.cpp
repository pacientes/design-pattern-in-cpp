#include "ProxyFactory.h"

#include "RealSubject.h"

std::shared_ptr<Proxy> ProxyFactory::getObject()
{
    std::shared_ptr<Subject> real = std::make_shared<RealSubject>();
    return std::make_shared<Proxy>(real);
}
