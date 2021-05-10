#include "IContainer.h"
#include "map_uint16.h"

map_uint16::map_uint16(size_t cycles) :
    IContainer { },
    m_map { },
    m_cycles { cycles }
{
}

void map_uint16::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint16_t value = static_cast<uint16_t>(i);
        m_map[i] = value;
    }
}
