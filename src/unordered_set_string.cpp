#include "IContainer.h"
#include "unordered_set_string.h"
#include <sstream>

unordered_set_string::unordered_set_string(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void unordered_set_string::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        std::stringstream ss;
        ss << i;
        m_buffer.insert(ss.str());
    }
}
