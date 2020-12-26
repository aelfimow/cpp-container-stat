#include "IContainer.h"
#include "list_uint8.h"

list_uint8::list_uint8(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void list_uint8::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        m_buffer.push_back(0);
    }
}
