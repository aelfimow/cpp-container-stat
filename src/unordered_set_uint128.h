#ifdef UNORDERED_SET_UINT128_H
#error Already included
#else
#define UNORDERED_SET_UINT128_H

#include <unordered_set>
#include <cstdint>

class unordered_set_uint128 : public IContainer
{
    public:
        explicit unordered_set_uint128(size_t cycles);
        ~unordered_set_uint128() override = default;

        void run() override;

    private:
        std::unordered_set<unsigned __int128> m_buffer;
        size_t const m_cycles;

    public:
        unordered_set_uint128() = delete;
};

#endif
