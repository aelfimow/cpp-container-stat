#ifdef VECTOR_UINT64_H
#error Already included
#else
#define VECTOR_UINT64_H

#include <vector>
#include <cstdint>

class vector_uint64 : public IContainer
{
    public:
        explicit vector_uint64(size_t cycles);
        ~vector_uint64() override = default;

        void run() override;

    private:
        std::vector<uint64_t> m_buffer;
        size_t const m_cycles;

    public:
        vector_uint64() = delete;
};

#endif
