#pragma once

#include <memory>
#include <iostream>

// 객체 생성의 타입
enum class LanguageType
{
	Korean = 0,
	English
};

// 인터페이스 클래스
class ILanguage
{
public:
	virtual void text() = 0;
};

class Korean final :
	public ILanguage
{
public:
	void text() override
	{
		std::cout << "Hello, Korean Class" << std::endl;
	}
};

class English final :
	public ILanguage
{
public:
	void text() override
	{
		std::cout << "Hello, English Class" << std::endl;
	}
};

// 팩토리 패턴
class Factory final
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

// 심플 팩토리 패턴
// 객체의 생성을 클래스 내부적으로 해결한다.
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

