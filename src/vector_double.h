#ifdef VECTOR_DOUBLE_H
#error Already included
#else
#define VECTOR_DOUBLE_H

#include <vector>
#include <cstdint>

class vector_double : public IContainer
{
    public:
        explicit vector_double(size_t cycles);
        ~vector_double() override = default;

        void run() override;

    private:
        std::vector<double> m_buffer;
        size_t const m_cycles;

    public:
        vector_double() = delete;
};

#endif
