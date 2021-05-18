#include "IContainer.h"
#include "vector_float.h"

vector_float::vector_float(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void vector_float::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        float value = static_cast<float>(i);
        m_buffer.push_back(value);
    }
}
