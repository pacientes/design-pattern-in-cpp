#ifndef __THERMOMETER_H__
#define __THERMOMETER_H__

class Thermometer
{
public:
    void setTemperature(const double temperature);

    const double getTemperature() const;

private:
    double m_temperature;
};

#endif // __THERMOMETER_H__
