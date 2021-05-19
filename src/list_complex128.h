#ifdef LIST_COMPLEX128_H
#error Already included
#else
#define LIST_COMPLEX128_H

#include <list>
#include <quadmath.h>
#include <cstdint>

class list_complex128 : public IContainer
{
    public:
        explicit list_complex128(size_t cycles);
        ~list_complex128() override = default;

        void run() override;

    private:
        std::list<__complex128> m_buffer;
        size_t const m_cycles;

    public:
        list_complex128() = delete;
};

#endif
