#ifdef DEQUE_COMPLEX128_H
#error Already included
#else
#define DEQUE_COMPLEX128_H

#include <deque>
#include <quadmath.h>
#include <cstdint>

class deque_complex128 : public IContainer
{
    public:
        explicit deque_complex128(size_t cycles);
        ~deque_complex128() override = default;

        void run() override;

    private:
        std::deque<__complex128> m_buffer;
        size_t const m_cycles;

    public:
        deque_complex128() = delete;
};

#endif
