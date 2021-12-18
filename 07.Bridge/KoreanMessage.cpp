#include "KoreanMessage.h"

KoreanMessage::KoreanMessage() : Message("Hello Korean!")
{
}

const std::string &KoreanMessage::greeting() const
{
    return m_message;
}
