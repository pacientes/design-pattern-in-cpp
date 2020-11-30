#pragma once

#include "Hello.h"

class Language
{
public:
	virtual std::string execute() = 0;

protected:
	std::shared_ptr<Hello> m_Impl;
};
