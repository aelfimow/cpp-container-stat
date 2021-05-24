#include "IContainer.h"
#include "set_double.h"

set_double::set_double(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void set_double::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        double value = static_cast<double>(i);
        m_buffer.insert(value);
    }
}
