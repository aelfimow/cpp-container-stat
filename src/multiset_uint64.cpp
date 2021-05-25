#include "IContainer.h"
#include "multiset_uint64.h"

multiset_uint64::multiset_uint64(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void multiset_uint64::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint64_t value = i;
        m_buffer.insert(value);
    }
}
