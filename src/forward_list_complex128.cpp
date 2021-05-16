#include "IContainer.h"
#include "forward_list_complex128.h"

forward_list_complex128::forward_list_complex128(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void forward_list_complex128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        __complex128 value { static_cast<__float128>(i), static_cast<__float128>(i) };
        m_buffer.push_front(value);
    }
}
