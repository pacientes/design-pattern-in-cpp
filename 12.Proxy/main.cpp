#include "RealSubject.h"
#include "Proxy.h"

int main(int argc, char *argv[])
{
    std::shared_ptr<Subject> realSubject = std::make_shared<RealSubject>();
    std::shared_ptr<Proxy> proxy = std::make_shared<Proxy>(realSubject);

    proxy->actionA();
    proxy->actionB();

    return 0;
}
