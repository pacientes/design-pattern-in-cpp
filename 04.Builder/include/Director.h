#ifndef __DIRECTOR_H__
#define __DIRECTOR_H__

#include "IBuilder.h"

class Director
{
public:
    Director(std::shared_ptr<IBuilder> builder);

    std::shared_ptr<Computer> create();

private:
    std::shared_ptr<IBuilder> m_builder;
};

#endif // __DIRECTOR_H__
