#include "IContainer.h"
#include "map_string.h"
#include <sstream>

map_string::map_string(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void map_string::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        std::stringstream ss;
        ss << i;
        m_buffer[i] = ss.str();
    }
}
