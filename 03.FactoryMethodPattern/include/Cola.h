#ifndef __COLA_H__
#define __COLA_H__

#include "IDrink.h"

class Cola : public IDrink
{
public:
    virtual void drink() override;
};

#endif // __COLA_H__
