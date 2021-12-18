#include "Facade.h"

Facade::Facade()
{
    m_package_a = std::make_shared<PackageA>();
    m_package_b = std::make_shared<PackageB>();
    m_package_c = std::make_shared<PackageC>();
}

void Facade::processAll()
{
    m_package_a->process();
    m_package_b->process();
    m_package_c->process();
}
