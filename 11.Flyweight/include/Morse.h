#ifndef __MORSE_H__
#define __MORSE_H__

#include "Flyweight.h"

class MorseG : public Flyweight
{
public:
    MorseG();

    virtual void code() override;
};

class MorseO : public Flyweight
{
public:
    MorseO();

    virtual void code() override;
};

class MorseL : public Flyweight
{
public:
    MorseL();

    virtual void code() override;
};

class MorseE : public Flyweight
{
public:
    MorseE();

    virtual void code() override;
};

#endif // __MORSE_H__
