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
#include "deque_uint128.h"
#include "deque_float.h"
#include "deque_double.h"
#include "deque_long_double.h"
#include "deque_float128.h"
#include "deque_complex128.h"
#include "set_uint8.h"
#include "set_uint16.h"
#include "set_uint32.h"
#include "set_uint64.h"
#include "set_uint128.h"
#include "set_float.h"
#include "set_double.h"
#include "set_long_double.h"
#include "set_float128.h"
#include "set_string.h"
#include "multiset_uint8.h"
#include "multiset_uint16.h"
#include "multiset_uint32.h"
#include "multiset_uint64.h"
#include "multiset_uint128.h"
#include "multiset_float.h"
#include "multiset_double.h"
#include "multiset_long_double.h"
#include "multiset_float128.h"
#include "multiset_string.h"
#include "unordered_set_uint8.h"
#include "unordered_set_uint16.h"
#include "unordered_set_uint32.h"
#include "unordered_set_uint64.h"
#include "unordered_set_float.h"
#include "unordered_set_double.h"
#include "unordered_set_long_double.h"
#include "unordered_set_string.h"
#include "unordered_multiset_uint8.h"
#include "unordered_multiset_uint16.h"
#include "unordered_multiset_uint32.h"
#include "unordered_multiset_uint64.h"


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
        { "deque_uint64",               [&]() { return new deque_uint64 { cycles }; } },
        { "deque_uint128",              [&]() { return new deque_uint128 { cycles }; } },
        { "deque_float",                [&]() { return new deque_float { cycles }; } },
        { "deque_double",               [&]() { return new deque_double { cycles }; } },
        { "deque_long_double",          [&]() { return new deque_long_double { cycles }; } },
        { "deque_float128",             [&]() { return new deque_float128 { cycles }; } },
        { "deque_complex128",           [&]() { return new deque_complex128 { cycles }; } },
        { "set_uint8",                  [&]() { return new set_uint8 { cycles }; } },
        { "set_uint16",                 [&]() { return new set_uint16 { cycles }; } },
        { "set_uint32",                 [&]() { return new set_uint32 { cycles }; } },
        { "set_uint64",                 [&]() { return new set_uint64 { cycles }; } },
        { "set_uint128",                [&]() { return new set_uint128 { cycles }; } },
        { "set_float",                  [&]() { return new set_float { cycles }; } },
        { "set_double",                 [&]() { return new set_double { cycles }; } },
        { "set_long_double",            [&]() { return new set_long_double { cycles }; } },
        { "set_float128",               [&]() { return new set_float128 { cycles }; } },
        { "set_string",                 [&]() { return new set_string { cycles }; } },
        { "multiset_uint8",             [&]() { return new multiset_uint8 { cycles }; } },
        { "multiset_uint16",            [&]() { return new multiset_uint16 { cycles }; } },
        { "multiset_uint32",            [&]() { return new multiset_uint32 { cycles }; } },
        { "multiset_uint64",            [&]() { return new multiset_uint64 { cycles }; } },
        { "multiset_uint128",           [&]() { return new multiset_uint128 { cycles }; } },
        { "multiset_float",             [&]() { return new multiset_float { cycles }; } },
        { "multiset_double",            [&]() { return new multiset_double { cycles }; } },
        { "multiset_long_double",       [&]() { return new multiset_long_double { cycles }; } },
        { "multiset_float128",          [&]() { return new multiset_float128 { cycles }; } },
        { "multiset_string",            [&]() { return new multiset_string { cycles }; } },
        { "unordered_set_uint8",        [&]() { return new unordered_set_uint8 { cycles }; } },
        { "unordered_set_uint16",       [&]() { return new unordered_set_uint16 { cycles }; } },
        { "unordered_set_uint32",       [&]() { return new unordered_set_uint32 { cycles }; } },
        { "unordered_set_uint64",       [&]() { return new unordered_set_uint64 { cycles }; } },
        { "unordered_set_float",        [&]() { return new unordered_set_float { cycles }; } },
        { "unordered_set_double",       [&]() { return new unordered_set_double { cycles }; } },
        { "unordered_set_long_double",  [&]() { return new unordered_set_long_double { cycles }; } },
        { "unordered_set_string",       [&]() { return new unordered_set_string { cycles }; } },
        { "unordered_multiset_uint8",   [&]() { return new unordered_multiset_uint8 { cycles }; } },
        { "unordered_multiset_uint16",  [&]() { return new unordered_multiset_uint16 { cycles }; } },
        { "unordered_multiset_uint32",  [&]() { return new unordered_multiset_uint32 { cycles }; } },
        { "unordered_multiset_uint64",  [&]() { return new unordered_multiset_uint64 { cycles }; } }
    };

    auto it = containers.find(type);

    if (it == containers.end())
    {
        throw std::invalid_argument("No container: " + type);
    }

    return it->second();
}
