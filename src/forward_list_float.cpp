#include "IContainer.h"
#include "forward_list_float.h"

forward_list_float::forward_list_float(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void forward_list_float::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        float value = static_cast<float>(i);
        m_buffer.push_front(value);
    }
}
