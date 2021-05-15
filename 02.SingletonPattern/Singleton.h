#pragma once

#include <iostream>

class Singleton
{
public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static Singleton& getInstance()
    {
        static Singleton instance;
        return instance;
    }

    void setID(int id)
    {
        m_id = id;
    }

    int getID()
    {
        return m_id;
    }

private:
    Singleton()
    {
        std::cout << "Singleton object is constructed" << std::endl;
    }

    int m_id;
};
