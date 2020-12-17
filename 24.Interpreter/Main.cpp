#include "Context.h"
#include "Expression.h"

#include <iostream>
#include <memory>
#include <stack>

int main(const int argc, const char* argv[])
{
    std::shared_ptr<Context> context = std::make_shared<Context>("{{ 1 1 + }}");
    std::stack<std::string> stack;

    // Client
    while (true)
    {
        std::string token = context->next();
        if (token.empty())
        {
            break;
        }

        if (token == "}}")
        {
            std::cout << "End!" << std::endl;
        }
        else if (std::atoi(token.c_str()))
        {
            std::cout << "Stack Push" << std::endl;
            stack.push(token);
        }
        else if (token == "+")
        {
            std::cout << "+ Operator" << std::endl;

            std::string left = stack.top();
            stack.pop();
            std::string right = stack.top();
            stack.pop();

            std::shared_ptr<Add> add = std::make_shared<Add>(left, right);
            std::string value = add->interpret();
            std::cout << "Result: " << value << std::endl;
            stack.push(value);
        }
    }

    std::cout << "Final Result: " << stack.top() << std::endl;
    stack.pop();

    return 0;
}
