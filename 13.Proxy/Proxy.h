#pragma once

#include "Subject.h"
#include "RealSubject.h"

#include <iostream>
#include <memory>

#ifdef REMOTE_PROXY

class Proxy :
    public Subject
{
public:
    Proxy(std::shared_ptr<RealSubject> realSubject)
    {
        m_realSubject = realSubject;
    }

    std::string action1() override
    {
        std::cout << "[Proxy] action1 doing" << std::endl;
        //m_realSubject->action1();
        return "Replaced proxy action1()";
    }

    std::string action2() override
    {
        std::string msg = m_realSubject->action2();
        if (msg.empty())
        {
            return "Nothing returned by RealSubject action2()...";
        }
        else
        {
            return msg;
        }
    }

private:
    std::shared_ptr<RealSubject> m_realSubject;
};

#endif

////////////////////////////////////////////////////////////

#ifdef VIRTUAL_PROXY

class Proxy :
    public Subject
{
public:
    void action1() override
    {
        std::cout << "[Proxy] action1 doing" << std::endl;
    }

    void action2() override
    {
        // 게으른 객체 생성
        if (m_realSubject == nullptr)
        {
            real();
        }
        std::cout << "[Proxy] action2 doing" << std::endl;
        m_realSubject->action2();
    }

private:
    void real()
    {
        std::cout << "[Proxy] concreate RealSubject object" << std::endl;
        m_realSubject = std::make_shared<RealSubject>();
    }

    std::shared_ptr<RealSubject> m_realSubject;
};

#endif

//class ProxyFactory
//{
//public:
//    std::shared_ptr<Proxy> getObject()
//    {
//        std::shared_ptr<RealSubject> real = std::make_shared<RealSubject>();
//        return std::make_shared<Proxy>(real);
//    }
//};

////////////////////////////////////////////////////////////

#ifdef PERMIT_PROXY

typedef enum class ePERMIT_T
{
    ALLOW,
    DISALLOW
} ePERMIT;

class Proxy :
    public Subject
{
public:
    Proxy(ePERMIT permit)
    {
        m_permit = permit;
    }

    void action1() override
    {
        std::cout << "[Proxy] action1 doing" << std::endl;
    }

    void action2() override
    {
        if (m_permit == ePERMIT::ALLOW)
        {
            // 게으른 객체 생성
            if (m_realSubject == nullptr)
            {
                real();
            }
            std::cout << "[Proxy] action2 doing" << std::endl;
            m_realSubject->action2();
        }
        else
        {
            std::cout << "[Proxy] disallow action2" << std::endl;
        }
    }

private:
    void real()
    {
        std::cout << "[Proxy] concreate RealSubject object" << std::endl;
        m_realSubject = std::make_shared<RealSubject>();
    }

    std::shared_ptr<RealSubject> m_realSubject;
    ePERMIT m_permit;
};

#endif // PERMIT_PROXY

////////////////////////////////////////////////////////////

#ifdef SMART_PROXY

typedef enum class ePERMIT_T
{
    ALLOW,
    DISALLOW
} ePERMIT;

class Proxy :
    public Subject
{
public:
    Proxy(ePERMIT permit)
    {
        m_permit = permit;
        m_count = 0;
    }

    void action1() override
    {
        std::cout << "[Proxy] action1 doing" << std::endl;
        m_count++;
    }

    void action2() override
    {
        if (m_permit == ePERMIT::ALLOW)
        {
            // 게으른 객체 생성
            if (m_realSubject == nullptr)
            {
                real();
            }
            std::cout << "[Proxy] action2 doing" << std::endl;
            m_realSubject->action2();
            m_count++;
        }
        else
        {
            std::cout << "[Proxy] disallow action2" << std::endl;
        }
    }

    // 스마트 프록시
    int getCount()
    {
        return m_count;
    }

private:
    void real()
    {
        std::cout << "[Proxy] concreate RealSubject object" << std::endl;
        m_realSubject = std::make_shared<RealSubject>();
    }

    std::shared_ptr<RealSubject> m_realSubject;
    ePERMIT m_permit;
    int m_count;
};

#endif // SMART_PROXY
