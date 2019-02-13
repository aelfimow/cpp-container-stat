#include <string>
#include <map>
#include <functional>

#include "CppContainer.h"
#include "IContainer.h"


IContainer *CppContainer::instantiate(std::string const &type)
{
    static std::map<std::string, std::function<IContainer *()>> const containers
    {
        { "vector", []() { return nullptr; } },
    };

    if (auto it = containers.find(type); it != containers.end())
    {
        return it->second();
    }

    return nullptr;
}
