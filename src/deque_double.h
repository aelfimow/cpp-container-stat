#ifdef DEQUE_DOUBLE_H
#error Already included
#else
#define DEQUE_DOUBLE_H

#include <deque>
#include <cstdint>

class deque_double : public IContainer
{
    public:
        explicit deque_double(size_t cycles);
        ~deque_double() override = default;

        void run() override;

    private:
        std::deque<double> m_buffer;
        size_t const m_cycles;

    public:
        deque_double() = delete;
};

#endif
