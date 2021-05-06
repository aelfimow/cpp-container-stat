#include "IContainer.h"
#include "forward_list_string.h"
#include <sstream>

forward_list_string::forward_list_string(size_t cycles) :
    IContainer { },
    m_buffer { },
    m_cycles { cycles }
{
}

void forward_list_string::run()
{
    for (size_t i = 0; i < m_cycles; ++i)
    {
        std::stringstream ss;
        ss << i;
        m_buffer.push_front(ss.str());
    }
}
