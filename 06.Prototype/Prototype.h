#pragma once

#include <memory>

class Prototype
{
public:
	virtual std::shared_ptr<Prototype> clone() const = 0;
	virtual void setMessage(const std::string& message) = 0;
	virtual	const std::string& getMessage() = 0;
};
