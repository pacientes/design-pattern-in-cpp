#pragma once

#include <string>

//#define REMOTE_PROXY
#define VIRTUAL_PROXY
//#define PERMIT_PROXY
#define SMART_PROXY

////////////////////////////////////////////////////////////

#ifdef REMOTE_PROXY

// 인터페이스
class Subject
{
public:
    virtual std::string action1() = 0;
    virtual std::string action2() = 0;
};

#endif // REMOTE_PROXY

////////////////////////////////////////////////////////////

#ifdef VIRTUAL_PROXY

// 인터페이스
class Subject
{
public:
    virtual void action1() = 0;
    virtual void action2() = 0;
};

#endif // VIRTUAL_PROXY
