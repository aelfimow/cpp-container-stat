#include "IContainer.h"
#include "vector_uint32.h"

vector_uint32::vector_uint32(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void vector_uint32::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint16_t value = static_cast<uint16_t>(i);
        m_buffer.push_back(value);
    }
}
