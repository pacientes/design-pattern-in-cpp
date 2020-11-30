#pragma once

#include <string>

class Component
{
public:
	void setName(std::string name)
	{
		m_name = name;
	}

	std::string getName()
	{
		return m_name;
	}

	virtual void print(int idx) = 0;

private:
	std::string m_name;
};
