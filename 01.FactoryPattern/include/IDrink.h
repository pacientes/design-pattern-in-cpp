#ifndef __IDRINK_H__
#define __IDRINK_H__

enum class DrinkType
{
    Water = 0,
    Cola,
    Juice
};

class IDrink
{
public:
    virtual void drink() = 0;
};

class Water : public IDrink
{
public:
    virtual void drink() override;
};

class Cola : public IDrink
{
public:
    virtual void drink() override;
};

class Juice : public IDrink
{
public:
    virtual void drink() override;
};

#endif // __IDRINK_H__
