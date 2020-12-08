#include "IContainer.h"
#include "list_uint16.h"

list_uint16::list_uint16(size_t cycles) :
    m_buffer { },
    m_cycles { cycles }
{
}

void list_uint16::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        m_buffer.push_back(0);
    }
}
