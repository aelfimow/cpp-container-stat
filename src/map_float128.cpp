#include "IContainer.h"
#include "map_float128.h"

map_float128::map_float128(size_t cycles) :
    IContainer { },
    m_map { },
    m_cycles { cycles }
{
}

void map_float128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        __float128 value = static_cast<__float128>(i);
        m_map[i] = value;
    }
}
