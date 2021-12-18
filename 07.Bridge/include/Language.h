#ifndef __LANGUAGE_H__
#define __LANGUAGE_H__

#include "Message.h"

#include <memory>

class Language
{
public:
    virtual const std::string &execute() const = 0;

protected:
    std::shared_ptr<Message> m_impl;
};

#endif // __LANGUAGE_H__
