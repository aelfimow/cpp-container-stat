#ifdef MAP_UINT32_H
#error Already included
#else
#define MAP_UINT32_H

#include <map>
#include <cstdint>

class map_uint32 : public IContainer
{
    public:
        explicit map_uint32(size_t cycles);
        ~map_uint32() override = default;

        void run() override;

    private:
        std::map<size_t, uint32_t> m_map;
        size_t const m_cycles;

    public:
        map_uint32() = delete;
};

#endif
