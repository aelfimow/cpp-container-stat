#ifdef MAP_LONG_DOUBLE_H
#error Already included
#else
#define MAP_LONG_DOUBLE_H

#include <map>
#include <cstdint>

class map_long_double : public IContainer
{
    public:
        explicit map_long_double(size_t cycles);
        ~map_long_double() override = default;

        void run() override;

    private:
        std::map<size_t, long double> m_map;
        size_t const m_cycles;

    public:
        map_long_double() = delete;
};

#endif
