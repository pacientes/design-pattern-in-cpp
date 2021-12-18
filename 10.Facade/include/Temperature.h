#ifndef __TEMPERATURE_H__
#define __TEMPERATURE_H__

#include "Thermometer.h"

#include <memory>

class Temperature
{
public:
    Temperature(std::shared_ptr<Thermometer> thermometer);

    const double getTemp();

private:
    std::shared_ptr<Thermometer> m_thermometer;
};

#endif // __TEMPERATURE_H__
