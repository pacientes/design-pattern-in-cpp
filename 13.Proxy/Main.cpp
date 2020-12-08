#include "Proxy.h"
#include "RealSubject.h"

int main(const int argc, const char* argv[])
{
#ifdef REMOTE_PROXY
    std::shared_ptr<ProxyFactory> factory = std::make_shared<ProxyFactory>();
    std::shared_ptr<Proxy> proxy = factory->getObject();

    std::cout << proxy->action1() << std::endl;
    std::cout << proxy->action2() << std::endl;
#endif // REMOTE_PROXY

#ifdef VIRTUAL_PROXY
    std::shared_ptr<Proxy> proxy = std::make_shared<Proxy>();
    proxy->action1();
    proxy->action2();
#endif

    return 0;
}
