#pragma once

#include "IProduct.h"

#include <memory>

// 팩토리 메서드 패턴의 핵심, 팩토리를 추상화한다.
// 실제로 생성할 객체의 타입을 몰라도 된다.
class IFactory
{
public:
    // create() 인터페이스를 통해서만 객체 생성이 가능하다.
    // IProduct를 상속하는 어떤 객체든 생성이 가능하다.
    virtual std::shared_ptr<IProduct> create() final
    {
        return this->createProduct();
    }

protected:
    // 기존의 팩토리 패턴에는 객체의 생성에 필요한 타입을 지정받았다.
    // 팩토리 메서드 패턴은 객체의 인터페이스를 생성하고, 추상화하기 때문에
    // 객체 생성에 필요한 타입을 몰라도 된다.
    virtual std::shared_ptr<IProduct> createProduct() = 0;
};
