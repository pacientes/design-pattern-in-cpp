#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <string>

class Subject
{
public:
    virtual std::string actionA() = 0;

    virtual std::string actionB() = 0;
};

#endif // __SUBJECT_H__
