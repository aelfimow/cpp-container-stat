#ifdef SET_UINT128_H
#error Already included
#else
#define SET_UINT128_H

#include <set>
#include <cstdint>

class set_uint128 : public IContainer
{
    public:
        explicit set_uint128(size_t cycles);
        ~set_uint128() override = default;

        void run() override;

    private:
        std::set<unsigned __int128> m_buffer;
        size_t const m_cycles;

    public:
        set_uint128() = delete;
};

#endif
