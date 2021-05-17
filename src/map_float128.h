#ifdef MAP_FLOAT128_H
#error Already included
#else
#define MAP_FLOAT128_H

#include <map>
#include <cstdint>

class map_float128 : public IContainer
{
    public:
        explicit map_float128(size_t cycles);
        ~map_float128() override = default;

        void run() override;

    private:
        std::map<size_t, __float128> m_map;
        size_t const m_cycles;

    public:
        map_float128() = delete;
};

#endif
