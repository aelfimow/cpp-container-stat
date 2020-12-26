#include "IContainer.h"
#include "list_uint32.h"

list_uint32::list_uint32(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void list_uint32::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        m_buffer.push_back(0);
    }
}
