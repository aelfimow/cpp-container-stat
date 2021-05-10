#ifdef MAP_UINT16_H
#error Already included
#else
#define MAP_UINT16_H

#include <map>
#include <cstdint>

class map_uint16 : public IContainer
{
    public:
        explicit map_uint16(size_t cycles);
        ~map_uint16() override = default;

        void run() override;

    private:
        std::map<size_t, uint16_t> m_map;
        size_t const m_cycles;

    public:
        map_uint16() = delete;
};

#endif
