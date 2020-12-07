#ifdef VECTOR_UINT16_H
#error Already included
#else
#define VECTOR_UINT16_H

#include <vector>
#include <cstdint>

class vector_uint16 : public IContainer
{
    public:
        explicit vector_uint16(size_t cycles);
        ~vector_uint16() override = default;

        void run() override;

    private:
        std::vector<uint16_t> m_buffer;
        size_t const m_cycles;

    public:
        vector_uint16() = delete;
};

#endif
