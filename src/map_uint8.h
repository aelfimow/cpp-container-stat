#ifdef MAP_UINT8_H
#error Already included
#else
#define MAP_UINT8_H

#include <map>
#include <cstdint>

class map_uint8 : public IContainer
{
    public:
        explicit map_uint8(size_t cycles);
        ~map_uint8() override = default;

        void run() override;

    private:
        std::vector<uint8_t> m_map;
        size_t const m_cycles;

    public:
        map_uint8() = delete;
};

#endif
