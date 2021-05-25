#include "IContainer.h"
#include "multiset_uint32.h"

multiset_uint32::multiset_uint32(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void multiset_uint32::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint32_t value = static_cast<uint32_t>(i);
        m_buffer.insert(value);
    }
}
