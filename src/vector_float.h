#ifdef VECTOR_FLOAT_H
#error Already included
#else
#define VECTOR_FLOAT_H

#include <vector>
#include <cstdint>

class vector_float : public IContainer
{
    public:
        explicit vector_float(size_t cycles);
        ~vector_float() override = default;

        void run() override;

    private:
        std::vector<float> m_buffer;
        size_t const m_cycles;

    public:
        vector_float() = delete;
};

#endif
