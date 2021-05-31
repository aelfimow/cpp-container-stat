#include "IContainer.h"
#include "unordered_set_long_double.h"

unordered_set_long_double::unordered_set_long_double(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void unordered_set_long_double::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        long double value = static_cast<long double>(i);
        m_buffer.insert(value);
    }
}
