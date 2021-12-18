#include "EnglishMessage.h"

EnglishMessage::EnglishMessage() : Message("Hello English")
{
}

const std::string &EnglishMessage::greeting() const
{
    return m_message;
}
