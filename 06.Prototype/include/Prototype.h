#ifndef __PROTOTYPE_H__
#define __PROTOTYPE_H__

#include <memory>
#include <string>

class Prototype
{
public:
    virtual std::shared_ptr<Prototype> clone() const = 0;

    virtual void setMessage(const std::string &message) = 0;

    virtual std::string getMessage() const = 0;
};

#endif // __PROTOTYPE_H__
