#pragma once

// 인터페이스 클래스
#include "ILanguage.h"

// 생성을 위임할 객체 클래스
#include "Korean.h"
#include "English.h"

#include <memory>
#include <iostream>

// 팩토리 패턴
class Factory final
{
public:
	static std::shared_ptr<ILanguage> getInstance(const LanguageType& type)
	{
		// 객체의 타입을 알아야 하는 단점이 있다.
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

// 심플 팩토리 패턴, 객체의 생성을 클래스 내부적으로 해결한다.
class SimpleHello final
{
public:
	void greeting()
	{
		std::shared_ptr<ILanguage> language = factory();
		language->text();
	}

	// 객체의 메소드로 객체 생성을 담당한다.
	static std::shared_ptr<ILanguage> factory()
	{
		return std::make_shared<Korean>();
	}
};
