#pragma once

#include "Builder.h"

#include "Computer.h"
#include "Memory.h"
#include "Storage.h"

class Algorithm
{
public:
	virtual void setCpu(const std::string& cpu) = 0;
	virtual void setRam(const Memory& ram) = 0;
	virtual void setStorage(const Storage& storage) = 0;

	Algorithm* getInstance()
	{
		return this;
	}
protected:
	IBuilder m_builder;
};
