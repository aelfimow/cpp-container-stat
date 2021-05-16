#include "IContainer.h"
#include "forward_list_long_double.h"

forward_list_long_double::forward_list_long_double(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void forward_list_long_double::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        long double value = static_cast<long double>(i);
        m_buffer.push_front(value);
    }
}
