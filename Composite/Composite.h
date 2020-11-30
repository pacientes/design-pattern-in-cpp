#pragma once

#include "Component.h"

#include <vector>
#include <map>

class Composite :
	public Component
{
public:
	Composite(std::string name)
	{
		setName(name);
	}

	void addNode(std::shared_ptr<Component> component)
	{
		m_comp.push_back(component);
	}

	void print(int idx = 0) override final
	{
		for (int i = 0; i < idx; i++)
		{
			std::cout << "\t";
		}
		std::cout << "Directory : " << getName() << std::endl;

		for (const auto& item : m_comp)
		{
			item->print(idx + 1);
		}
	}

private:
	std::vector<std::shared_ptr<Component>> m_comp;
};
