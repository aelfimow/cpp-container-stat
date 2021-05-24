#ifdef SET_LONG_DOUBLE_H
#error Already included
#else
#define SET_LONG_DOUBLE_H

#include <set>
#include <cstdint>

class set_long_double : public IContainer
{
    public:
        explicit set_long_double(size_t cycles);
        ~set_long_double() override = default;

        void run() override;

    private:
        std::set<long double> m_buffer;
        size_t const m_cycles;

    public:
        set_long_double() = delete;
};

#endif
