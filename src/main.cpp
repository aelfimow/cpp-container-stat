#include <iostream>
#include <sstream>
#include <memory>
#include "rdtsc_func.h"
#include "CppContainer.h"
#include "IContainer.h"
#include "size_check.h"


int main(int argc, char *argv[])
try
{
    if (argc < 2)
    {
        throw std::invalid_argument("Usage: maxCycles [container]");
    }

    size_t maxCycles = 0;
    {
        std::stringstream ss { argv[1] };
        ss >> maxCycles;
    }

    std::string container_type { "empty" };
    if (argc > 2)
    {
        container_type.clear();
        container_type.append(argv[2]);
    }

    std::cout << "Max. cycles: " << maxCycles << std::endl;
    std::cout << "Container: " << container_type << std::endl;

    std::unique_ptr<IContainer> container(CppContainer::instantiate(container_type, maxCycles));

    auto tsc0 = ::rdtsc_func();
    {
        container->run();
    }
    auto tsc1 = ::rdtsc_func();

    auto diff = tsc1 - tsc0;

    std::cout << "Clocks: " << diff << std::endl;

    return EXIT_SUCCESS;
}
catch (std::exception &exc)
{
    std::cerr << "Exception: " << exc.what() << std::endl;
    return EXIT_FAILURE;
}
catch (...)
{
    std::cerr << "Error: exception" << std::endl;
    return EXIT_FAILURE;
}
