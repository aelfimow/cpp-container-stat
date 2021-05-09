#include "IContainer.h"
#include "vector_string.h"
#include <sstream>

vector_string::vector_string(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void vector_string::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        std::stringstream ss;
        ss << i;
        m_buffer.push_back(ss.str());
    }
}
