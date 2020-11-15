#pragma once

class Memory
{
public:
	Memory()
	{
		m_size = 0;
	}

	Memory(const int& size)
	{
		m_size = size;
	}

	void setSize(const int& size)
	{
		m_size = size;
	}

	int getSize()
	{
		return m_size;
	}

private:
	int m_size;
};
