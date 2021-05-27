#ifdef MULTISET_FLOAT128_H
#error Already included
#else
#define MULTISET_FLOAT128_H

#include <set>
#include <cstdint>

class multiset_float128 : public IContainer
{
    public:
        explicit multiset_float128(size_t cycles);
        ~multiset_float128() override = default;

        void run() override;

    private:
        std::multiset<__float128> m_buffer;
        size_t const m_cycles;

    public:
        multiset_float128() = delete;
};

#endif
