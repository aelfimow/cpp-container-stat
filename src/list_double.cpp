#include "IContainer.h"
#include "list_double.h"

list_double::list_double(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void list_double::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        double value = static_cast<double>(i);
        m_buffer.push_back(value);
    }
}
