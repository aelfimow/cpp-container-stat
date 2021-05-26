#ifdef MULTISET_DOUBLE_H
#error Already included
#else
#define MULTISET_DOUBLE_H

#include <set>
#include <cstdint>

class multiset_double : public IContainer
{
    public:
        explicit multiset_double(size_t cycles);
        ~multiset_double() override = default;

        void run() override;

    private:
        std::multiset<double> m_buffer;
        size_t const m_cycles;

    public:
        multiset_double() = delete;
};

#endif
