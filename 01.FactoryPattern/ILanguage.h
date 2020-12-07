#pragma once

// 생성할 객체의 타입
enum class LanguageType
{
    Korean = 0,
    English
} Language;

// Language 클래스의 인터페이스
class ILanguage
{
public:
    virtual void text() = 0;
};
