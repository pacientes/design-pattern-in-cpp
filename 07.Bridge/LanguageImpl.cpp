#include "LanguageImpl.h"

LanguageImpl::LanguageImpl(std::shared_ptr<Message> message)
{
    m_impl = message;
}

const std::string &LanguageImpl::execute() const
{
    return m_impl->greeting();
}
