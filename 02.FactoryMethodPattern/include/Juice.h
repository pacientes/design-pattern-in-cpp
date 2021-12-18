#ifndef __JUICE_H__
#define __JUICE_H__

#include "IDrink.h"

class Juice : public IDrink
{
public:
    virtual void drink() override;
};

#endif // __JUICE_H__
