#ifndef __PROXY_FACTORY_H__
#define __PROXY_FACTORY_H__

#include "Proxy.h"

#include <memory>

class ProxyFactory
{
    std::shared_ptr<Proxy> getObject();
};

#endif // __PROXY_FACTORY_H__
