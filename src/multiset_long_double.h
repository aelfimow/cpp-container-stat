#ifdef MULTISET_LONG_DOUBLE_H
#error Already included
#else
#define MULTISET_LONG_DOUBLE_H

#include <set>
#include <cstdint>

class multiset_long_double : public IContainer
{
    public:
        explicit multiset_long_double(size_t cycles);
        ~multiset_long_double() override = default;

        void run() override;

    private:
        std::multiset<long double> m_buffer;
        size_t const m_cycles;

    public:
        multiset_long_double() = delete;
};

#endif
