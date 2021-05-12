#ifdef MAP_UINT64_H
#error Already included
#else
#define MAP_UINT64_H

#include <map>
#include <cstdint>

class map_uint64 : public IContainer
{
    public:
        explicit map_uint64(size_t cycles);
        ~map_uint64() override = default;

        void run() override;

    private:
        std::map<size_t, uint64_t> m_map;
        size_t const m_cycles;

    public:
        map_uint64() = delete;
};

#endif
