#include "IContainer.h"
#include "set_uint8.h"

set_uint8::set_uint8(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void set_uint8::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint8_t value = static_cast<uint8_t>(i);
        m_buffer.insert(value);
    }
}
