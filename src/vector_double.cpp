#include "IContainer.h"
#include "vector_double.h"

vector_double::vector_double(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void vector_double::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        double value = static_cast<double>(i);
        m_buffer.push_back(value);
    }
}
