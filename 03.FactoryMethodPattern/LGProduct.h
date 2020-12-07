#pragma once

#include "IProduct.h"

#include <iostream>

// 실제 생성할 객체 클래스
class LGProduct final :
    public IProduct
{
public:
    void name() override
    {
        std::cout << "LG Gram laptop" << std::endl;
    }
};
