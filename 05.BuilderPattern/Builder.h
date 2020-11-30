#pragma once

#include "IBuilder.h"
#include "Algorithm.h"

class Builder final :
	public IBuilder
{
public:
	Builder(std::shared_ptr<Algorithm> algorithm) : IBuilder(algorithm)
	{
		// 실제 구현 클래스에서 부모 클래스의 생성자를 호출한다.
	}

	Computer build() override
	{
		std::cout << "[Builder] Build..." << std::endl;
		m_algorithm->showAlgorithm(); // algorithm 클래스의 메소드 호출

		m_algorithm->setCpu("i7"); // algorithm 클래스의 메소드 호출

		std::vector<Memory> memory;
		memory.push_back(Memory(8));
		memory.push_back(Memory(8));
		m_algorithm->setRam(memory); // algorithm 클래스의 메소드 호출

		std::vector<Storage> storage;
		storage.push_back(Storage(256));
		storage.push_back(Storage(512));
		m_algorithm->setStorage(storage); // algorithm 클래스의 메소드 호출

		return m_algorithm->getInstance();
	}
};
