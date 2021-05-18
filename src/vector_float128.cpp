#include "IContainer.h"
#include "vector_float128.h"

vector_float128::vector_float128(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void vector_float128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        __float128 value = static_cast<__float128>(i);
        m_buffer.push_back(value);
    }
}
