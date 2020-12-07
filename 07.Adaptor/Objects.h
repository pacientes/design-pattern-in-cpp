#pragma once
#include "Adapter.h"
#include "Math.h"
#include <iostream>
#include <memory>

class Objects :
    public Adapter
{
public:
    Objects()
    {
        m_adapter = std::make_shared<Math>();
    }

    int twoTime(int num)
    {
        float _num = m_adapter->twoTime(static_cast<float>(num));
        return static_cast<int>(_num);
    }

    int halfTime(int num)
    {
        float _num = m_adapter->halfTime(static_cast<float>(num));
        return static_cast<int>(_num);
    }


private:
    std::shared_ptr<Math> m_adapter;
};
