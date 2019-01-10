#include <iostream>
#include <sstream>
#include <vector>

extern "C" uint64_t rdtsc_func(void);

int main(int argc, char *argv[])
try
{
    if (argc != 2)
    {
        throw std::invalid_argument("Usage: maxSteps");
    }

    size_t maxSteps = 0;
    {
        std::stringstream ss { argv[1] };
        ss >> maxSteps;
    }

    std::cout << "Max. steps: " << maxSteps << std::endl;

    std::vector<uint8_t> buffer;

    auto tsc0 = ::rdtsc_func();
    {
        for (size_t step = 0; step < maxSteps; ++step)
        {
            buffer.push_back(0);
        }
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
