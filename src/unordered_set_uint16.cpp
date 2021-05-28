#include "IContainer.h"
#include "unordered_set_uint16.h"

unordered_set_uint16::unordered_set_uint16(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void unordered_set_uint16::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint16_t value = static_cast<uint16_t>(i);
        m_buffer.insert(value);
    }
}
