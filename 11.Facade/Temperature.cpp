#include "Temperature.h"

Temperature::Temperature(std::shared_ptr<Thermometer> thermometer)
{
    m_thermometer = thermometer;
}

const double Temperature::getTemp()
{
    return m_thermometer->getTemperature();
}
