#ifdef VECTOR_UINT128_H
#error Already included
#else
#define VECTOR_UINT128_H

#include <vector>
#include <cstdint>

class vector_uint128 : public IContainer
{
    public:
        explicit vector_uint128(size_t cycles);
        ~vector_uint128() override = default;

        void run() override;

    private:
        std::vector<unsigned __int128> m_buffer;
        size_t const m_cycles;

    public:
        vector_uint128() = delete;
};

#endif
