#pragma once

#include <string>
#include <vector>
#include <iostream>

#include "Monitor32.h"

class Monitor
{
public:
    void addMonitor(std::shared_ptr<Monitor32> monitor)
    {
        m_screen.push_back(monitor);
    }

    void show()
    {
        for (const auto& item : m_screen)
        {
            std::cout << item->m_name << std::endl;
        }
    }

    std::string m_name = "Monitor";
    std::vector<std::shared_ptr<Monitor32>> m_screen;
};
