#pragma once

#include "Package.h"
#include <memory>

class Facade
{
public:
    Facade()
    {
        m_package1 = std::make_shared<Package1>();
        m_package2 = std::make_shared<Package2>();
        m_package3 = std::make_shared<Package3>();
    }

    void processAll()
    {
        m_package1->process();
        m_package2->process();
        m_package3->process();
    }

private:
    std::shared_ptr<Package1> m_package1;
    std::shared_ptr<Package2> m_package2;
    std::shared_ptr<Package3> m_package3;
};
