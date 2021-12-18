#ifndef __T_SHIRT_H__
#define __T_SHIRT_H__

#include "Component.h"

class TShirt : public Component
{
public:
    TShirt();

    virtual const std::string product() override;

    virtual const int price() override;
};

#endif // __Y_SHIRT_H__
