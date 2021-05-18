#ifdef VECTOR_FLOAT128_H
#error Already included
#else
#define VECTOR_FLOAT128_H

#include <vector>
#include <cstdint>

class vector_float128 : public IContainer
{
    public:
        explicit vector_float128(size_t cycles);
        ~vector_float128() override = default;

        void run() override;

    private:
        std::vector<__float128> m_buffer;
        size_t const m_cycles;

    public:
        vector_float128() = delete;
};

#endif
