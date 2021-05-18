#ifdef VECTOR_COMPLEX128_H
#error Already included
#else
#define VECTOR_COMPLEX128_H

#include <vector>
#include <quadmath.h>
#include <cstdint>

class vector_complex128 : public IContainer
{
    public:
        explicit vector_complex128(size_t cycles);
        ~vector_complex128() override = default;

        void run() override;

    private:
        std::vector<__complex128> m_buffer;
        size_t const m_cycles;

    public:
        vector_complex128() = delete;
};

#endif
