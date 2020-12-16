#pragma once

#include <iostream>

class LightState
{
public:
    virtual void on() = 0;
    virtual void off() = 0;
    virtual bool state() = 0;
};

class LightLamp :
    public LightState
{
public:
    LightLamp()
    {
        m_state = false;
    }

    void on()
    {
        std::cout << "[LightLamp] on" << std::endl;
        m_state = true;
    }

    void off()
    {
        std::cout << "[LightLamp] off" << std::endl;
        m_state = false;
    }

    bool state()
    {
        std::cout << "[LightLamp] state(), " << m_state << std::endl;
        return m_state;
    }

private:
    bool m_state;
};
