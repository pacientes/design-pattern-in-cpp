#include "Package.h"

#include <iostream>

PackageA::PackageA()
{
    m_package_name = "Package A";
}

void PackageA::process()
{
    std::cout << m_package_name << ", process()" << std::endl;
}

PackageB::PackageB()
{
    m_package_name = "Package B";
}

void PackageB::process()
{
    std::cout << m_package_name << ", process()" << std::endl;
}

PackageC::PackageC()
{
    m_package_name = "Package C";
}

void PackageC::process()
{
    std::cout << m_package_name << ", process()" << std::endl;
}
