#ifdef VECTOR_UINT8_H
#error Already included
#else
#define VECTOR_UINT8_H

#include <vector>
#include <cstdint>

class vector_uint8 : public IContainer
{
    public:
        explicit vector_uint8(size_t cycles);
        ~vector_uint8() override = default;

        void run() override;

    private:
        std::vector<uint8_t> m_buffer;
        size_t const m_cycles;

    public:
        vector_uint8() = delete;
};

#endif
