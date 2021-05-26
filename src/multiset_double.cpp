#include "IContainer.h"
#include "multiset_double.h"

multiset_double::multiset_double(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void multiset_double::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        double value = static_cast<double>(i);
        m_buffer.insert(value);
    }
}
