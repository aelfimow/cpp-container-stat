#include "IContainer.h"
#include "deque_long_double.h"

deque_long_double::deque_long_double(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void deque_long_double::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        long double value = static_cast<long double>(i);
        m_buffer.push_back(value);
    }
}
