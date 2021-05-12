#ifdef MAP_UINT128_H
#error Already included
#else
#define MAP_UINT128_H

#include <map>
#include <cstdint>

class map_uint128 : public IContainer
{
    public:
        explicit map_uint128(size_t cycles);
        ~map_uint128() override = default;

        void run() override;

    private:
        std::map<size_t, unsigned __int128> m_map;
        size_t const m_cycles;

    public:
        map_uint128() = delete;
};

#endif
