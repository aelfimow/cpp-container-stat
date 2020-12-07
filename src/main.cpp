#include <iostream>
#include <sstream>
#include <memory>
#include "rdtsc_func.h"
#include "CppContainer.h"
#include "IContainer.h"


int main(int argc, char *argv[])
try
{
    if (argc < 2)
    {
        throw std::invalid_argument("Usage: maxSteps [container]");
    }

    size_t maxSteps = 0;
    {
        std::stringstream ss { argv[1] };
        ss >> maxSteps;
    }

    std::string container_type { "vector_uint8" };
    if (argc > 2)
    {
        container_type.clear();
        container_type.append(argv[2]);
    }

    std::cout << "Max. steps: " << maxSteps << std::endl;
    std::cout << "Container: " << container_type << std::endl;

    std::unique_ptr<IContainer> container(CppContainer::instantiate(container_type, maxSteps));

    if (!container)
    {
        std::string const msg { "No container: " + container_type };
        throw std::invalid_argument(msg);
    }

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
