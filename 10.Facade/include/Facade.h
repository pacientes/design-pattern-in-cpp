#ifndef __FACADE_H__
#define __FACADE_H__

#include "Package.h"

#include <memory>

class Facade
{
public:
    Facade();

    void processAll();

private:
    std::shared_ptr<PackageA> m_package_a;
    std::shared_ptr<PackageB> m_package_b;
    std::shared_ptr<PackageC> m_package_c;
};

#endif // __FACADE_H__
