#include "IContainer.h"
#include "vector_long_double.h"

vector_long_double::vector_long_double(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void vector_long_double::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        long double value = static_cast<long double>(i);
        m_buffer.push_back(value);
    }
}
