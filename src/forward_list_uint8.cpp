#include "IContainer.h"
#include "forward_list_uint8.h"

forward_list_uint8::forward_list_uint8(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void forward_list_uint8::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        m_buffer.push_front(0);
    }
}
