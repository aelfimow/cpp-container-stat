#include "IContainer.h"
#include "map_double.h"

map_double::map_double(size_t cycles) :
    IContainer { },
    m_map { },
    m_cycles { cycles }
{
}

void map_double::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        double value = static_cast<double>(i);
        m_map[i] = value;
    }
}
