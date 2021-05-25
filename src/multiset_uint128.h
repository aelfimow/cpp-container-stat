#ifdef MULTISET_UINT128_H
#error Already included
#else
#define MULTISET_UINT128_H

#include <set>
#include <cstdint>

class multiset_uint128 : public IContainer
{
    public:
        explicit multiset_uint128(size_t cycles);
        ~multiset_uint128() override = default;

        void run() override;

    private:
        std::multiset<unsigned __int128> m_buffer;
        size_t const m_cycles;

    public:
        multiset_uint128() = delete;
};

#endif
