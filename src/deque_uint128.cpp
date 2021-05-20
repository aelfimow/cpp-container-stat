#include "IContainer.h"
#include "deque_uint128.h"

deque_uint128::deque_uint128(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void deque_uint128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        unsigned __int128 value = static_cast<unsigned __int128>(i);
        m_buffer.push_back(value);
    }
}
