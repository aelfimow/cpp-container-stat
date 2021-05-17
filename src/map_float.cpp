#include "IContainer.h"
#include "map_float.h"

map_float::map_float(size_t cycles) :
    IContainer { },
    m_map { },
    m_cycles { cycles }
{
}

void map_float::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        float value = static_cast<float>(i);
        m_map[i] = value;
    }
}
