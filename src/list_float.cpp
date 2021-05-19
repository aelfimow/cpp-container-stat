#include "IContainer.h"
#include "list_float.h"

list_float::list_float(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void list_float::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        float value = static_cast<float>(i);
        m_buffer.push_back(value);
    }
}
