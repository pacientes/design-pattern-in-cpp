#pragma once

#include "Computer.h"

class Algorithm
{
public:
    virtual void showAlgorithm() = 0;
    virtual void setCpu(const std::string& cpu) = 0;
    virtual void setRam(const std::vector<Memory>& ram) = 0;
    virtual void setStorage(const std::vector<Storage>& storage) = 0;

    Computer getInstance()
    {
        return m_computer;
    }

protected:
    Computer m_computer;
};
