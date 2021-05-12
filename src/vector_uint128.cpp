#include "IContainer.h"
#include "vector_uint128.h"

vector_uint128::vector_uint128(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void vector_uint128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        unsigned __int128 value = i;
        m_buffer.push_back(value);
    }
}
