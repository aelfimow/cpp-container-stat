#include "IContainer.h"
#include "forward_list_uint32.h"

forward_list_uint32::forward_list_uint32(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void forward_list_uint32::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        m_buffer.push_front(0);
    }
}
