#pragma once

#include "IDoorProduct.h"
#include "ITireProduct.h"

#include <memory>

class IFactory
{
public:
	virtual std::shared_ptr<ITireProduct> createTire() = 0;
	virtual std::shared_ptr<IDoorProduct> createDoor() = 0;
};
