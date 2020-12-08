#include <string>
#include <map>
#include <functional>

#include "CppContainer.h"
#include "IContainer.h"
#include "vector_uint8.h"
#include "vector_uint16.h"
#include "vector_uint32.h"
#include "vector_uint64.h"
#include "list_uint8.h"


IContainer *CppContainer::instantiate(std::string const &type, size_t cycles)
{
    std::map<std::string, std::function<IContainer *()>> const containers
    {
        { "vector_uint8",  [&]() { return new vector_uint8 { cycles }; } },
        { "vector_uint16", [&]() { return new vector_uint16 { cycles }; } },
        { "vector_uint32", [&]() { return new vector_uint32 { cycles }; } },
        { "vector_uint64", [&]() { return new vector_uint64 { cycles }; } },
        { "list_uint8",    [&]() { return new list_uint8 { cycles }; } }
    };

    auto it = containers.find(type);

    if (it == containers.end())
    {
        throw std::invalid_argument("No container: " + type);
    }

    return it->second();
}
