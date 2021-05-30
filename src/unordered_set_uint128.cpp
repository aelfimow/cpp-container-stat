#include "IContainer.h"
#include "unordered_set_uint128.h"

unordered_set_uint128::unordered_set_uint128(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void unordered_set_uint128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint64_t value = i;
        m_buffer.insert(value);
    }
}
