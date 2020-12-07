#include <string>
#include <map>
#include <functional>

#include "CppContainer.h"
#include "IContainer.h"
#include "vector_uint8.h"
#include "vector_uint16.h"
#include "vector_uint32.h"
#include "vector_uint64.h"


IContainer *CppContainer::instantiate(std::string const &type, size_t cycles)
{
    static std::map<std::string, std::function<IContainer *()>> const containers
    {
        { "vector_uint8",  [&]() { return new vector_uint8 { cycles }; } },
        { "vector_uint16", [&]() { return new vector_uint16 { cycles }; } },
        { "vector_uint32", [&]() { return new vector_uint32 { cycles }; } },
        { "vector_uint64", [&]() { return new vector_uint64 { cycles }; } },
    };

    if (auto it = containers.find(type); it != containers.end())
    {
        return it->second();
    }

    return nullptr;
}
