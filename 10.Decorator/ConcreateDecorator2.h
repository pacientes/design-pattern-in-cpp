#pragma once

#include <memory>

#include "Decorator.h"

// ConcreateDecorate
class ConcreateDecorator2 :
	public Decorator
{
public:
	ConcreateDecorator2(std::shared_ptr<Component> component) :
		Decorator(component)
	{

	}

	std::string product()
	{
		return Decorator::product() + ", " + "ssd256";
	}

	int price()
	{
		return Decorator::price() + 100000;
	}
};
