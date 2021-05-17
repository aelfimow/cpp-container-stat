#include "IContainer.h"
#include "map_complex128.h"

map_complex128::map_complex128(size_t cycles) :
    IContainer { },
    m_map { },
    m_cycles { cycles }
{
}

void map_complex128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        __complex128 value = static_cast<__complex128>(i);
        m_map[i] = value;
    }
}
