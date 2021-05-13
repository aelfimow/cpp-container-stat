#include "IContainer.h"
#include "forward_list_uint128.h"

forward_list_uint128::forward_list_uint128(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void forward_list_uint128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        unsigned __int128 value = static_cast<unsigned __int128>(i);
        m_buffer.push_front(value);
    }
}
