#include "IContainer.h"
#include "multiset_string.h"
#include <sstream>

multiset_string::multiset_string(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void multiset_string::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        std::stringstream ss;
        ss << i;
        m_buffer.insert(ss.str());
    }
}
