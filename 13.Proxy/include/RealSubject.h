#ifndef __REAL_SUBJECT_H__
#define __REAL_SUBJECT_H__

#include "Subject.h"

class RealSubject : public Subject
{
public:
    RealSubject();

    virtual std::string actionA() override;

    virtual std::string actionB() override;
};

#endif // __REAL_SUBJECT_H__
