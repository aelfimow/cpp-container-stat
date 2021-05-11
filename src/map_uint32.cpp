#include "IContainer.h"
#include "map_uint32.h"

map_uint32::map_uint32(size_t cycles) :
    IContainer { },
    m_map { },
    m_cycles { cycles }
{
}

void map_uint32::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint32_t value = static_cast<uint32_t>(i);
        m_map[i] = value;
    }
}
