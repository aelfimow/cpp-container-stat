#include "IContainer.h"
#include "forward_list_double.h"

forward_list_double::forward_list_double(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void forward_list_double::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        double value = static_cast<double>(i);
        m_buffer.push_front(value);
    }
}
