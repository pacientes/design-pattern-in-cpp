#ifndef __WATER_H__
#define __WATER_H__

#include "IDrink.h"

class Water : public IDrink
{
public:
    virtual void drink() override;
};

#endif // __WATER_H__
