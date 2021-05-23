#include "IContainer.h"
#include "set_uint128.h"

set_uint128::set_uint128(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void set_uint128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        unsigned __int128 value = static_cast<unsigned __int128>(i);
        m_buffer.insert(value);
    }
}
