#pragma once

// subsystem
class Thermometer
{
public:
    float getTemperature()
    {
        return m_temperature;
    }

private:
    float m_temperature;
};

// facade
class Temperature
{
public:
    Temperature(Thermometer thermometer)
    {
        m_thermometer = thermometer;
    }

    float getTemp()
    {
        // new instance
        Thermometer thermometer = getThermometer();

        // return by new instance
        return thermometer.getTemperature();

        // to-be
        //return m_thermometer.getTemperature();
    }

private:
    // unnecessary method call
    Thermometer getThermometer()
    {
        return m_thermometer;
    }

    Thermometer m_thermometer;
};
