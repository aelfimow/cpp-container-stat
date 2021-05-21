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
    if (argc < 3)
    {
        throw std::invalid_argument("Usage: container maxCycles");
    }

    std::string container_type;
    container_type.append(argv[1]);

    size_t maxCycles = 0;
    {
        std::stringstream ss { argv[2] };
        ss >> maxCycles;
    }

    std::cout << "Container: " << container_type << std::endl;
    std::cout << "Max. cycles: " << maxCycles << std::endl;

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
