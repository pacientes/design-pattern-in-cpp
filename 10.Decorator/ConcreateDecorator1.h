#pragma once

#include <memory>

#include "Decorator.h"

// ConcreateDecorate
class ConcreateDecorator1 :
	public Decorator
{
public:
	ConcreateDecorator1(std::shared_ptr<Component> component) :
		Decorator(component)
	{

	}

	std::string product()
	{
		return Decorator::product() + ", " + "i7";
	}

	int price()
	{
		return Decorator::price() + 46000;
	}
};
