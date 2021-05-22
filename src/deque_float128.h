#ifdef DEQUE_FLOAT128_H
#error Already included
#else
#define DEQUE_FLOAT128_H

#include <deque>
#include <cstdint>

class deque_float128 : public IContainer
{
    public:
        explicit deque_float128(size_t cycles);
        ~deque_float128() override = default;

        void run() override;

    private:
        std::deque<__float128> m_buffer;
        size_t const m_cycles;

    public:
        deque_float128() = delete;
};

#endif
