#ifndef __HELLO_H__
#define __HELLO_H__

#include "Prototype.h"

class Hello : public Prototype
{
public:
    Hello(const std::string &message);

    virtual std::shared_ptr<Prototype> clone() const;

    virtual void setMessage(const std::string &message);

    virtual std::string getMessage() const;

private:
    std::string m_message;
};

#endif // __HELLO_H__
