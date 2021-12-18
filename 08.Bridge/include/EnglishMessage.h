#ifndef __ENGLISH_MESSAGE_H__
#define __ENGLISH_MESSAGE_H__

#include "Message.h"

class EnglishMessage : public Message
{
public:
    EnglishMessage();

    virtual const std::string &greeting() const override;
};

#endif // __ENGLISH_MESSAGE_H__
