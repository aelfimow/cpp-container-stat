#include "IContainer.h"
#include "set_float128.h"

set_float128::set_float128(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void set_float128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        __float128 value = static_cast<__float128>(i);
        m_buffer.insert(value);
    }
}
