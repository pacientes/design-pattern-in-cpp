#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Memory.h"
#include "Storage.h"

class Computer
{
public:
	Computer()
	{
		m_ram.clear();
		m_storage.clear();
		std::cout << "Computer object is constructed" << std::endl;
	}

	std::string toString()
	{
		std::string infoComputer = "This computer's spec is...\nCPU: " +
			m_cpu + ",\nRAM: " +
			std::to_string(this->memory()) + "{}GB,\nStorage : " +
			std::to_string(this->storage()) + "{}GB.\n";

		return infoComputer;
	}

	int memory()
	{
		int size = 0;
		for (size_t i = 0; i < m_ram.size(); i++)
		{
			size += m_ram[i].getSize();
		}

		return size;
	}

	int storage()
	{
		int size = 0;
		for (size_t i = 0; i < m_storage.size(); i++)
		{
			size += m_ram[i].getSize();
		}

		return size;
	}

private:
	std::string m_cpu;
	std::vector<Memory> m_ram;
	std::vector<Storage> m_storage;
};
