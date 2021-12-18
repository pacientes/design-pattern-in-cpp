#ifndef __STRAWBERRY_H__
#define __STRAWBERRY_H__

#include "Abstract.h"

class Strawberry : public Abstract
{
protected:
    virtual std::string bread() override;

    virtual std::string jam() override;
};

#endif // __STRAWBERRY_H__
