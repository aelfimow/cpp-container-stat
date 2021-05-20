#include <string>
#include <map>
#include <functional>
#include <stdexcept>

#include "CppContainer.h"
#include "IContainer.h"
#include "empty.h"
#include "map_uint8.h"
#include "map_uint16.h"
#include "map_uint32.h"
#include "map_uint64.h"
#include "map_uint128.h"
#include "map_string.h"
#include "map_float.h"
#include "map_double.h"
#include "map_long_double.h"
#include "map_float128.h"
#include "map_complex128.h"
#include "vector_uint8.h"
#include "vector_uint16.h"
#include "vector_uint32.h"
#include "vector_uint64.h"
#include "vector_uint128.h"
#include "vector_string.h"
#include "vector_float.h"
#include "vector_double.h"
#include "vector_long_double.h"
#include "vector_float128.h"
#include "vector_complex128.h"
#include "list_uint8.h"
#include "list_uint16.h"
#include "list_uint32.h"
#include "list_uint64.h"
#include "list_uint128.h"
#include "list_string.h"
#include "list_float.h"
#include "list_double.h"
#include "list_long_double.h"
#include "list_float128.h"
#include "list_complex128.h"
#include "forward_list_uint8.h"
#include "forward_list_uint16.h"
#include "forward_list_uint32.h"
#include "forward_list_uint64.h"
#include "forward_list_uint128.h"
#include "forward_list_string.h"
#include "forward_list_float.h"
#include "forward_list_double.h"
#include "forward_list_long_double.h"
#include "forward_list_float128.h"
#include "forward_list_complex128.h"
#include "deque_uint8.h"
#include "deque_uint16.h"
#include "deque_uint32.h"
#include "deque_uint64.h"


IContainer *CppContainer::instantiate(std::string const &type, size_t cycles)
{
    std::map<std::string, std::function<IContainer *()>> const containers
    {
        { "empty",                      [&]() { return new empty { cycles }; } },
        { "map_uint8",                  [&]() { return new map_uint8 { cycles }; } },
        { "map_uint16",                 [&]() { return new map_uint16 { cycles }; } },
        { "map_uint32",                 [&]() { return new map_uint32 { cycles }; } },
        { "map_uint64",                 [&]() { return new map_uint64 { cycles }; } },
        { "map_uint128",                [&]() { return new map_uint128 { cycles }; } },
        { "map_string",                 [&]() { return new map_string { cycles }; } },
        { "map_float",                  [&]() { return new map_float { cycles }; } },
        { "map_double",                 [&]() { return new map_double { cycles }; } },
        { "map_long_double",            [&]() { return new map_long_double { cycles }; } },
        { "map_float128",               [&]() { return new map_float128 { cycles }; } },
        { "map_complex128",             [&]() { return new map_complex128 { cycles }; } },
        { "vector_uint8",               [&]() { return new vector_uint8 { cycles }; } },
        { "vector_uint16",              [&]() { return new vector_uint16 { cycles }; } },
        { "vector_uint32",              [&]() { return new vector_uint32 { cycles }; } },
        { "vector_uint64",              [&]() { return new vector_uint64 { cycles }; } },
        { "vector_uint128",             [&]() { return new vector_uint128 { cycles }; } },
        { "vector_string",              [&]() { return new vector_string { cycles }; } },
        { "vector_float",               [&]() { return new vector_float { cycles }; } },
        { "vector_double",              [&]() { return new vector_double { cycles }; } },
        { "vector_long_double",         [&]() { return new vector_long_double { cycles }; } },
        { "vector_float128",            [&]() { return new vector_float128 { cycles }; } },
        { "vector_complex128",          [&]() { return new vector_complex128 { cycles }; } },
        { "list_uint8",                 [&]() { return new list_uint8 { cycles }; } },
        { "list_uint16",                [&]() { return new list_uint16 { cycles }; } },
        { "list_uint32",                [&]() { return new list_uint32 { cycles }; } },
        { "list_uint64",                [&]() { return new list_uint64 { cycles }; } },
        { "list_uint128",               [&]() { return new list_uint128 { cycles }; } },
        { "list_string",                [&]() { return new list_string { cycles }; } },
        { "list_float",                 [&]() { return new list_float { cycles }; } },
        { "list_double",                [&]() { return new list_double { cycles }; } },
        { "list_long_double",           [&]() { return new list_long_double { cycles }; } },
        { "list_float128",              [&]() { return new list_float128 { cycles }; } },
        { "list_complex128",            [&]() { return new list_complex128 { cycles }; } },
        { "forward_list_uint8",         [&]() { return new forward_list_uint8 { cycles }; } },
        { "forward_list_uint16",        [&]() { return new forward_list_uint16 { cycles }; } },
        { "forward_list_uint32",        [&]() { return new forward_list_uint32 { cycles }; } },
        { "forward_list_uint64",        [&]() { return new forward_list_uint64 { cycles }; } },
        { "forward_list_uint128",       [&]() { return new forward_list_uint128 { cycles }; } },
        { "forward_list_string",        [&]() { return new forward_list_string { cycles }; } },
        { "forward_list_float",         [&]() { return new forward_list_float { cycles }; } },
        { "forward_list_double",        [&]() { return new forward_list_double { cycles }; } },
        { "forward_list_long_double",   [&]() { return new forward_list_long_double { cycles }; } },
        { "forward_list_float128",      [&]() { return new forward_list_float128 { cycles }; } },
        { "forward_list_complex128",    [&]() { return new forward_list_complex128 { cycles }; } },
        { "deque_uint8",                [&]() { return new deque_uint8 { cycles }; } },
        { "deque_uint16",               [&]() { return new deque_uint16 { cycles }; } },
        { "deque_uint32",               [&]() { return new deque_uint32 { cycles }; } },
        { "deque_uint64",               [&]() { return new deque_uint64 { cycles }; } }
    };

    auto it = containers.find(type);

    if (it == containers.end())
    {
        throw std::invalid_argument("No container: " + type);
    }

    return it->second();
}
