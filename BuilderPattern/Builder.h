#pragma once

#include <iostream>

#include "Algorithm.h"

class IBuilder
{
public:
	IBuilder* setAlgorithm(Algorithm algorithm)
	{
		std::cout << "Setup builder object algorithm..." << std::endl;
		m_algorithm = algorithm;

		return this;
	}

protected:
	Algorithm m_algorithm;
};
