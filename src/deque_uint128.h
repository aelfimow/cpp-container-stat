#ifdef DEQUE_UINT128_H
#error Already included
#else
#define DEQUE_UINT128_H

#include <deque>
#include <cstdint>

class deque_uint128 : public IContainer
{
    public:
        explicit deque_uint128(size_t cycles);
        ~deque_uint128() override = default;

        void run() override;

    private:
        std::deque<unsigned __int128> m_buffer;
        size_t const m_cycles;

    public:
        deque_uint128() = delete;
};

#endif
