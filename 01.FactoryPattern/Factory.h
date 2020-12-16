#pragma once

#include "ILanguage.h"

#include "Korean.h"
#include "English.h"

#include <memory>
#include <iostream>

class Factory
{
public:
    static std::shared_ptr<ILanguage> getInstance(const LanguageType& type)
    {
        if (type == LanguageType::Korean)
        {
            std::cout << "Factory: make Korean object..." << std::endl;
            return std::make_shared<Korean>();
            std::cout << std::endl;
        }
        else if (type == LanguageType::English)
        {
            std::cout << "Factory: make English object..." << std::endl;
            return std::make_shared<English>();
            std::cout << std::endl;
        }
    }
};

class SimpleHello final
{
public:
    void greeting()
    {
        std::shared_ptr<ILanguage> language = factory();
        language->text();
    }

    static std::shared_ptr<ILanguage> factory()
    {
        return std::make_shared<Korean>();
    }
};
