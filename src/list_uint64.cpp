#include "IContainer.h"
#include "list_uint64.h"

list_uint64::list_uint64(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void list_uint64::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint64_t value = static_cast<uint64_t>(i);
        m_buffer.push_back(value);
    }
}
