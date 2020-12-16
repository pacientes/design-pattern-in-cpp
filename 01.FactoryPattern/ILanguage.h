#pragma once

// Type
enum class LanguageType
{
    Korean = 0,
    English
};

// Language Interface Class 
class ILanguage
{
public:
    virtual void text() = 0;
};
