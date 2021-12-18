#ifndef __TIRE_PRODUCT_H__
#define __TIRE_PRODUCT_H__

#include "ITireProduct.h"

class KoreaTire : public ITireProduct
{
public:
    virtual void makeAssemble() override;
};

class USATire : public ITireProduct
{
public:
    virtual void makeAssemble() override;
};

#endif // __TIRE_PRODUCT_H__
