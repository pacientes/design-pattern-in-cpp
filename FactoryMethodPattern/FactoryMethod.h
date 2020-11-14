#pragma once

#include <iostream>
#include <memory>

// 생성할 객체의 인터페이스 클래스
class IProduct
{
public:
	virtual void name() = 0;
};

// 실제 생성할 객체 클래스
class LgProduct final :
	public IProduct
{
public:
	void name() override
	{
		std::cout << "LG Gram laptop" << std::endl;
	}
};

class AppleProduct final :
	public IProduct
{
public:
	void name() override
	{
		std::cout << "Apple Macbook laptop" << std::endl;
	}
};

// 추상화 팩토리
class IFactory
{
public:
	// create() 인터페이스를 통해서만 객체 생성이 가능하다.
	// IProduct를 상속하는 어떤 객체든 생성이 가능하다.
	std::shared_ptr<IProduct> create()
	{
		return this->createProduct();
	}

protected:
	virtual std::shared_ptr<IProduct> createProduct() = 0;
};

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
		return std::make_shared<LgProduct>();
	}
};

class AppleFactory final :
	public IFactory
{
public:
	AppleFactory()
	{
		std::cout << "[Apple] is constructed" << std::endl;
	}

protected:
	std::shared_ptr<IProduct> createProduct() override
	{
		return std::make_shared<AppleProduct>();
	}
};