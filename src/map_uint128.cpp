#include "IContainer.h"
#include "map_uint128.h"

map_uint128::map_uint128(size_t cycles) :
    IContainer { },
    m_map { },
    m_cycles { cycles }
{
}

void map_uint128::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        unsigned __int128 value = i;
        m_map[i] = value;
    }
}
