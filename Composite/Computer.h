#pragma once

#include <memory>

#include "Monitor.h"
#include "Disk.h"
#include "Memory.h"


class Computer
{
public:
	void setMonitor(std::shared_ptr<Monitor> monitor)
	{
		m_monitor = monitor;
	}

	void setDisk(std::shared_ptr<Disk> disk)
	{
		m_disk = disk;
	}

	void setMemory(std::shared_ptr<Memory> memory)
	{
		m_memory = memory;
	}

	std::shared_ptr<Monitor> m_monitor;
	std::shared_ptr<Disk> m_disk;
	std::shared_ptr<Memory> m_memory;


	std::string m_name = "Computer Composite";
};
