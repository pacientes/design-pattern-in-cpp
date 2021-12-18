#ifndef __KOREAN_MESSAGE_H__
#define __KOREAN_MESSAGE_H__

#include "Message.h"

class KoreanMessage : public Message
{
public:
    KoreanMessage();

    virtual const std::string &greeting() const override;
};

#endif // __KOREAN_MESSAGE_H__
