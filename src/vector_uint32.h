#ifdef VECTOR_UINT32_H
#error Already included
#else
#define VECTOR_UINT32_H

#include <vector>
#include <cstdint>

class vector_uint32 : public IContainer
{
    public:
        explicit vector_uint32(size_t cycles);
        ~vector_uint32() override = default;

        void run() override;

    private:
        std::vector<uint32_t> m_buffer;
        size_t const m_cycles;

    public:
        vector_uint32() = delete;
};

#endif
