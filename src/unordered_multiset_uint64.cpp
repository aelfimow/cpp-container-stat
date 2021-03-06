#include "IContainer.h"
#include "unordered_multiset_uint64.h"

unordered_multiset_uint64::unordered_multiset_uint64(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void unordered_multiset_uint64::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint64_t value = i;
        m_buffer.insert(value);
    }
}
