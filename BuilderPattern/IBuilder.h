#pragma once

#include <iostream>

#include "Algorithm.h"
#include "Computer.h"

class IBuilder
{
public:
	IBuilder(std::shared_ptr<Algorithm> algorithm) :
		m_algorithm(algorithm)
	{
		// 빌더 인터페이스 클래스를 생성 시 객체를 생성할 알고리즘 객체가 필요하다.
	}

	auto getInstance()
	{
		return m_algorithm->getInstance();
	}

	virtual Computer build() = 0;

protected:
	std::shared_ptr<Algorithm> m_algorithm;
};
