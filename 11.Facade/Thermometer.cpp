#include "Thermometer.h"

void Thermometer::setTemperature(const double temperature)
{
    m_temperature = temperature;
}

const double Thermometer::getTemperature() const
{
    return m_temperature;
}
