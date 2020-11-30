#pragma once

#include "ITireProduct.h"

#include <iostream>

class KoreaTireProduct final :
	public ITireProduct
{
public:
	void makeAssemble() override
	{
		std::cout << "Korea Tire is assembled" << std::endl;
	}
};
