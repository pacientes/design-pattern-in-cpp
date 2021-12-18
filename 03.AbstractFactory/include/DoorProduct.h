#ifndef __DOOR_PRODUCT_H__
#define __DOOR_PRODUCT_H__

#include "IDoorProduct.h"

class KoreaDoor : public IDoorProduct
{
public:
    virtual void makeAssemble() override;
};

class USADoor : public IDoorProduct
{
public:
    virtual void makeAssemble() override;
};

#endif // __DOOR_PRODUCT_H__
