#ifndef __Y_SHIRT_H__
#define __Y_SHIRT_H__

#include "Component.h"

class YShirt : public Component
{
public:
    YShirt();

    virtual const std::string product() override;

    virtual const int price() override;
};

#endif // __Y_SHIRT_H__
