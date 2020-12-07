#pragma once

#include "IFactory.h"
#include "LGProduct.h"

#include <iostream>

// 객체의 생성을 담당할 클래스의 실제 구현 클래스
class LGFactory final :
    public IFactory
{
public:
    LGFactory()
    {
        std::cout << "[LG] is constructed" << std::endl;
    }

protected:
    std::shared_ptr<IProduct> createProduct() override
    {
        return std::make_shared<LGProduct>();
    }
};
