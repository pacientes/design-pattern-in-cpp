#pragma once

class Storage
{
public:
	Storage()
	{
		m_size = 0;
	}

	Storage(const int& size)
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
