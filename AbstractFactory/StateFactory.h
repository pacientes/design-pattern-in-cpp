#pragma once

#include "IFactory.h"

#include "StateDoor.h"
#include "StateTire.h"

class StateFactory final :
	public IFactory
{
public:
	StateFactory()
	{
		std::cout << "State Factory is working" << std::endl;
	}

	std::shared_ptr<ITireProduct> createTire() override
	{
		std::cout << "State Tire is constructed" << std::endl;
		return std::make_shared<StateTireProduct>();
	}

	std::shared_ptr<IDoorProduct> createDoor() override
	{
		std::cout << "State Door is constructed" << std::endl;
		return std::make_shared<StateDoorProduct>();
	}

};
