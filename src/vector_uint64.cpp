#include "IContainer.h"
#include "vector_uint64.h"

vector_uint64::vector_uint64(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void vector_uint64::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint64_t value = i;
        m_buffer.push_back(value);
    }
}
