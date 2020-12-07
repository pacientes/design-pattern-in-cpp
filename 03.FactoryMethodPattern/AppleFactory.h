#pragma once

#include "IFactory.h"
#include "AppleProduct.h"

#include <iostream>

// 객체의 생성을 담당할 클래스의 실제 구현 클래스
class AppleFactory final :
    public IFactory
{
public:
    AppleFactory()
    {
        std::cout << "[Apple] is constructed" << std::endl;
    }

protected:
    std::shared_ptr<IProduct> createProduct() override
    {
        return std::make_shared<AppleProduct>();
    }
};
