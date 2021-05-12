#include "IContainer.h"
#include "map_uint64.h"

map_uint64::map_uint64(size_t cycles) :
    IContainer { },
    m_map { },
    m_cycles { cycles }
{
}

void map_uint64::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint64_t value = i;
        m_map[i] = value;
    }
}
