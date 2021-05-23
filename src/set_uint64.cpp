#include "IContainer.h"
#include "set_uint64.h"

set_uint64::set_uint64(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void set_uint64::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint64_t value = i;
        m_buffer.insert(value);
    }
}
