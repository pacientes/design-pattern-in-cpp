#ifndef __LANGUAGE_IMPL_H__
#define __LANGUAGE_IMPL_H__

#include "Language.h"

class LanguageImpl : public Language
{
public:
    LanguageImpl(std::shared_ptr<Message> message);

    virtual const std::string &execute() const override;
};

#endif // __LANGUAGE_IMPL_H__
