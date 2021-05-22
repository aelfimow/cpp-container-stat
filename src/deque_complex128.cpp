#include "IContainer.h"
#include "deque_complex128.h"

deque_complex128::deque_complex128(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void deque_complex128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        __complex128 value = static_cast<__complex128>(i);
        m_buffer.push_back(value);
    }
}
