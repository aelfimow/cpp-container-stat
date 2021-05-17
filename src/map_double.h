#ifdef MAP_DOUBLE_H
#error Already included
#else
#define MAP_DOUBLE_H

#include <map>
#include <cstdint>

class map_double : public IContainer
{
    public:
        explicit map_double(size_t cycles);
        ~map_double() override = default;

        void run() override;

    private:
        std::map<size_t, double> m_map;
        size_t const m_cycles;

    public:
        map_double() = delete;
};

#endif
