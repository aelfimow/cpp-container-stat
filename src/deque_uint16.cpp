#include "IContainer.h"
#include "deque_uint16.h"

deque_uint16::deque_uint16(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void deque_uint16::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint16_t value = static_cast<uint16_t>(i);
        m_buffer.push_back(value);
    }
}
