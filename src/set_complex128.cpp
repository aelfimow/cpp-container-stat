#include "IContainer.h"
#include "set_complex128.h"

set_complex128::set_complex128(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void set_complex128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        __complex128 value = static_cast<__complex128>(i);
        m_buffer.insert(value);
    }
}
