#pragma once

#include <iostream>

class Package1
{
public:
	Package1()
	{
		std::cout << "Concreate Package1 object" << std::endl;
	}

	void process()
	{
		std::cout << "[Package1] do process.." << std::endl;
	}
};

class Package2
{
public:
	Package2()
	{
		std::cout << "Concreate Package2 object" << std::endl;
	}

	void process()
	{
		std::cout << "[Package2] do process.." << std::endl;
	}
};

class Package3
{
public:
	Package3()
	{
		std::cout << "Concreate Package3 object" << std::endl;
	}

	void process()
	{
		std::cout << "[Package3] do process.." << std::endl;
	}
};