#ifndef __FRUIT_H__
#define __FRUIT_H__

#include <string>

class Fruit
{
public:
    Fruit(const std::string &name);

    const std::string &getName() const;

private:
    std::string m_name;
};

#endif // __FRUIT_H__
