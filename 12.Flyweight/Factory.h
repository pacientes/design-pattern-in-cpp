#pragma once

#include "Flyweight.h"
#include <map>
#include <memory>

// template singleton
template<typename T>
class Singleton
{
public:
    static std::shared_ptr<T> getInstance()
    {
        if (m_instance == nullptr)
        {
            m_instance = std::make_shared<T>();
            atexit(destroy);
        }

        return m_instance;
    }

protected:
    Singleton()
    {

    }

    virtual ~Singleton()
    {

    }

    Singleton(const Singleton&)
    {

    }

private:
    static void destroy()
    {
        delete m_instance;
    }

    static std::shared_ptr<T> m_instance;
};

template <typename T> std::shared_ptr<T> Singleton <T>::m_instance;

class TemplateFactory :
    public Singleton<TemplateFactory>
{
public:
    template <typename T>
    std::shared_ptr<Flyweight> getCode(int key)
    {
        if (m_list.find(key) == m_list.end())
        {
            m_list[key] = std::make_shared<T>();
        }
    }

private:
    std::map<int, std::shared_ptr<Flyweight>> m_list;
};

/////////////////////

class Factory
{
public:
    std::shared_ptr<Flyweight> getCode(int key)
    {
        if (m_list.find(key) == m_list.end())
        {
            if (key == 'g')
            {
                m_list[key] = std::make_shared<MorseG>();
            }

            if (key == 'o')
            {
                m_list[key] = std::make_shared<MorseO>();
            }

            if (key == 'l')
            {
                m_list[key] = std::make_shared<MorseL>();
            }

            if (key == 'e')
            {
                m_list[key] = std::make_shared<MorseE>();
            }
        }

        return m_list[key];
    }

private:
    // 객체 공유 저장소
    std::map<int, std::shared_ptr<Flyweight>> m_list;
};
