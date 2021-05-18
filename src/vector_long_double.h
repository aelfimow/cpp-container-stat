#ifdef VECTOR_LONG_DOUBLE_H
#error Already included
#else
#define VECTOR_LONG_DOUBLE_H

#include <vector>
#include <cstdint>

class vector_long_double : public IContainer
{
    public:
        explicit vector_long_double(size_t cycles);
        ~vector_long_double() override = default;

        void run() override;

    private:
        std::vector<long double> m_buffer;
        size_t const m_cycles;

    public:
        vector_long_double() = delete;
};

#endif
