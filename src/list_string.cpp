#include "IContainer.h"
#include "list_string.h"
#include <sstream>

list_string::list_string(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void list_string::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        std::stringstream ss;
        ss << i;
        m_buffer.push_back(ss.str());
    }
}
