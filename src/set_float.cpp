#include "IContainer.h"
#include "set_float.h"

set_float::set_float(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void set_float::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        float value = static_cast<float>(i);
        m_buffer.insert(value);
    }
}
