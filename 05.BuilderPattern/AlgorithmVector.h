#pragma once

#include "Algorithm.h"

class AlgorithmVector final :
	public Algorithm
{
public:
	void showAlgorithm() override
	{
		std::cout << "[AlgorithmVector] Vector Builder" << std::endl;
	}

	void setCpu(const std::string& cpu) override
	{
		m_computer.setCpu(cpu);
	}

	void setRam(const std::vector<Memory>& ram) override
	{
		for (const auto& item : ram)
		{
			m_computer.setMemory(item);
		}
	}

	void setStorage(const std::vector<Storage>& storage) override
	{
		for (const auto& item : storage)
		{
			m_computer.setStorage(item);
		}
	}
};