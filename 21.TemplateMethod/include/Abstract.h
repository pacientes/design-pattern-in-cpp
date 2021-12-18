#ifndef __ABSTRACT_H__
#define __ABSTRACT_H__

#include <string>

class Abstract
{
public:
    std::string make();

protected:
    virtual std::string bread() = 0;

    virtual std::string jam() = 0;
};

#endif // __ABSTRACT_H__
