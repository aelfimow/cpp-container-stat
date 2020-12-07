#include "IContainer.h"
#include "vector_uint8.h"

vector_uint8::vector_uint8(size_t cycles) :
    m_buffer { },
    m_cycles { cycles }
{
}

void vector_uint8::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        m_buffer.push_back(0);
    }
}
