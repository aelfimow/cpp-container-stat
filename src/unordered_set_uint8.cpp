#include "IContainer.h"
#include "unordered_set_uint8.h"

unordered_set_uint8::unordered_set_uint8(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void unordered_set_uint8::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint8_t value = static_cast<uint8_t>(i);
        m_buffer.insert(value);
    }
}
