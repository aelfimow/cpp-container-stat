#ifdef MAP_FLOAT_H
#error Already included
#else
#define MAP_FLOAT_H

#include <map>
#include <cstdint>

class map_float : public IContainer
{
    public:
        explicit map_float(size_t cycles);
        ~map_float() override = default;

        void run() override;

    private:
        std::map<size_t, float> m_map;
        size_t const m_cycles;

    public:
        map_float() = delete;
};

#endif
