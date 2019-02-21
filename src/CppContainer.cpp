#include <string>
#include <map>
#include <functional>

#include "CppContainer.h"
#include "IContainer.h"
#include "vector_uint8.h"
#include "vector_uint16.h"


IContainer *CppContainer::instantiate(std::string const &type)
{
    static std::map<std::string, std::function<IContainer *()>> const containers
    {
        { "vector_uint8", []() { return new vector_uint8; } },
        { "vector_uint16", []() { return new vector_uint16; } }
    };

    if (auto it = containers.find(type); it != containers.end())
    {
        return it->second();
    }

    return nullptr;
}
