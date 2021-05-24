#include "IContainer.h"
#include "set_string.h"
#include <sstream>

set_string::set_string(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void set_string::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        std::stringstream ss;
        ss << i;
        m_buffer.insert(ss.str());
    }
}
