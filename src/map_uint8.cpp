#include "IContainer.h"
#include "map_uint8.h"

map_uint8::map_uint8(size_t cycles) :
    IContainer { },
    m_map { },
    m_cycles { cycles }
{
}

void map_uint8::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        uint8_t value = static_cast<uint8_t>(i);
        m_map[i] = value;
    }
}
