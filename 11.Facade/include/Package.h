#ifndef __PACKAGE_H__
#define __PACKAGE_H__

#include <string>

class PackageA
{
public:
    PackageA();

    void process();

private:
    std::string m_package_name;
};

class PackageB
{
public:
    PackageB();

    void process();

private:
    std::string m_package_name;
};

class PackageC
{
public:
    PackageC();

    void process();

private:
    std::string m_package_name;
};

#endif // __PACKAGE_H__
