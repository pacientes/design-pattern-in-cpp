#pragma once

// 생성할 객체의 인터페이스 클래스
#include "ILanguage.h"
// 객체의 생성을 담당할 팩토리
#include "Factory.h"

class Hello final
{
public:
    void greeting(const LanguageType& type)
    {
        // 인터페이스 클래스로 받으면 타입에 관계 없이 하나로 받을수 있다.
        std::shared_ptr<ILanguage> language = Factory::getInstance(type);
        language->text();
    }
};
