#pragma once

#include "ILanguage.h"
#include "Factory.h"

class Hello
{
public:
    void greeting(const LanguageType& type)
    {
        std::shared_ptr<ILanguage> language = Factory::getInstance(type);
        language->text();
    }
};
