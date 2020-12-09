#pragma once

#include "Chain.h"
#include "Order.h"
#include "Cancel.h"

#include <memory>
#include <iostream>

class Handler
{
public:
    std::string event(std::string event)
    {
        auto first = std::make_shared<Order>();
        first->setNext(std::make_shared<Cancel>());

        return first->execute(event);
    }
};


class IEvent
{
public:
    virtual std::string name() = 0;
};

class AEvent :
    public IEvent
{
public:
    std::string name() override
    {
        return "A";
    }
};

class BEvent :
    public IEvent
{
public:
    std::string name() override
    {
        return "B";
    }
};


class IHandler
{
public:
    IHandler(std::shared_ptr<IHandler> handler) :
        m_handler(handler)
    {

    }

    virtual void event(std::shared_ptr<IEvent> user)
    {
        if (m_handler != nullptr)
        {
            m_handler->event(user);
        }
    }

private:
    std::shared_ptr<IHandler> m_handler;
};

template<typename T>
class HandlerTemplate :
    public IHandler
{
public:
    HandlerTemplate(std::shared_ptr<IHandler> handler) :
        IHandler(handler)
    {

    }

    std::string event(std::shared_ptr<IEvent> user) override
    {
        if (dynamic_cast<std::shared_ptr<T>>(user) != nullptr)
        {
            std::cout << user->name << " Event" << std::endl;
        }
        else
        {
            IHandler::event(user);
        }
    }
};
