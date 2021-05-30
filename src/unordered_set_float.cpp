#include "IContainer.h"
#include "unordered_set_float.h"

unordered_set_float::unordered_set_float(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void unordered_set_float::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        float value = static_cast<float>(i);
        m_buffer.insert(value);
    }
}
