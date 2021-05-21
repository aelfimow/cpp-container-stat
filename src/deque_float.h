#ifdef DEQUE_FLOAT_H
#error Already included
#else
#define DEQUE_FLOAT_H

#include <deque>
#include <cstdint>

class deque_float : public IContainer
{
    public:
        explicit deque_float(size_t cycles);
        ~deque_float() override = default;

        void run() override;

    private:
        std::deque<float> m_buffer;
        size_t const m_cycles;

    public:
        deque_float() = delete;
};

#endif
