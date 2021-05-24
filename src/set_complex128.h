#ifdef SET_COMPLEX128_H
#error Already included
#else
#define SET_COMPLEX128_H

#include <set>
#include <quadmath.h>
#include <cstdint>

class set_complex128 : public IContainer
{
    public:
        explicit set_complex128(size_t cycles);
        ~set_complex128() override = default;

        void run() override;

    private:
        std::set<__complex128> m_buffer;
        size_t const m_cycles;

    public:
        set_complex128() = delete;
};

#endif
