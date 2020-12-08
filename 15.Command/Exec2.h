#pragma once

#include "Command.h"
#include "Recevier.h"

#include <iostream>

// 리시버 활용 형태
class Exec2 :
    public Command
{
public:
    Exec2(std::shared_ptr<Recevier> receiver)
    {
        std::cout << "[Exec2] object has concreated" << std::endl;
        m_receiver = receiver;
    }

    void execute() override
    {
        std::cout << "[Exec2] execute run" << std::endl;
        m_receiver->action1();
        m_receiver->action2();
    }

    void undo() override
    {
        std::cout << "[Exec2] undo run" << std::endl;
    }

private:
    std::shared_ptr<Recevier> m_receiver;
};
