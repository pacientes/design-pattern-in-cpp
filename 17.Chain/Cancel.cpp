#include "Cancel.h"

const std::string Cancel::execute(const std::string event)
{
    if (event == "cancel")
        return "[Cancel] execute";

    return m_next->execute(event);
}
