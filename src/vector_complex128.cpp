#include "IContainer.h"
#include "vector_complex128.h"

vector_complex128::vector_complex128(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void vector_complex128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        __complex128 value = static_cast<__complex128>(i);
        m_buffer.push_back(value);
    }
}
