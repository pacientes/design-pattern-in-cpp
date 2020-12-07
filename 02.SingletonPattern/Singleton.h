#pragma once

#include <iostream>
#include <mutex>

// 기본적인 싱글톤 패턴
class Config
{
public:
    static Config& getInstance()
    {
        static Config _instance;
        std::cout << &_instance << ", is created." << std::endl;
        return _instance;
    }

private:
    // 싱글톤 패턴의 핵심
    // 클래스의 생성을 외부에서 수행하지 못하도록 제한한다
    Config()
    {
    }

    ~Config()
    {
    }

    // 클래스 복사 생성자
    Config(const Config& config) = delete; // r-value
    Config(const Config&& config) = delete; // l-value

    // 클래스 대입 연산자
    Config& operator=(const Config& config) = delete; // r-value
    Config&& operator=(const Config&& config) = delete; // l-value
};

// DCLP(Double-Checked Locking Pattern)이 적용된 개선된 싱글톤
// 멀티쓰레딩 환경에서 싱글톤 생성 시 인터럽트 되는 부분을 방지한다
// #include <mutex>가 필요하다
class smartConfig
{
public:
    static smartConfig* getInstance()
    {
        if (_instance == nullptr)
        {
            std::lock_guard<std::mutex> lock(_mutex);

            if (_instance == nullptr)
            {
                _instance = new smartConfig();
            }
        }
        std::cout << &_instance << ", is created." << std::endl;

        return _instance;
    }

private:
    static smartConfig* volatile _instance;
    static std::mutex _mutex;

    smartConfig()
    {
    }

    ~smartConfig()
    {
    }

    smartConfig(const smartConfig& config) = delete;
    smartConfig(const smartConfig&& config) = delete;

    smartConfig& operator=(const smartConfig& config) = delete;
    smartConfig&& operator=(const smartConfig&& config) = delete;
};
