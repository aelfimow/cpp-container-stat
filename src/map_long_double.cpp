#include "IContainer.h"
#include "map_long_double.h"

map_long_double::map_long_double(size_t cycles) :
    IContainer { },
    m_map { },
    m_cycles { cycles }
{
}

void map_long_double::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        long double value = static_cast<long double>(i);
        m_map[i] = value;
    }
}
