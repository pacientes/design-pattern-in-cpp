#ifndef __BLUEBERRY_H__
#define __BLUEBERRY_H__

#include "Abstract.h"

class Blueberry : public Abstract
{
protected:
    virtual std::string bread() override;

    virtual std::string jam() override;
};

class BlueberryBagel : public Blueberry
{
    virtual std::string bread() override;
};

#endif // __BLUEBERRY_H__
