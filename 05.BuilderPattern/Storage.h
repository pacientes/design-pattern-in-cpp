#pragma once

class Storage
{
public:
    Storage(const int& size)
    {
        m_size = size;
    }

    void setSize(const int& size)
    {
        m_size = size;
    }

    const int getSize()
    {
        return m_size;
    }

private:
    int m_size;
};
