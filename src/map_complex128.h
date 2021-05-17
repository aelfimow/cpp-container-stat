#ifdef MAP_COMPLEX128_H
#error Already included
#else
#define MAP_COMPLEX128_H

#include <map>
#include <quadmath.h>
#include <cstdint>

class map_complex128 : public IContainer
{
    public:
        explicit map_complex128(size_t cycles);
        ~map_complex128() override = default;

        void run() override;

    private:
        std::map<size_t, __complex128> m_map;
        size_t const m_cycles;

    public:
        map_complex128() = delete;
};

#endif
