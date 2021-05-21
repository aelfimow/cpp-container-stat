#ifdef DEQUE_LONG_DOUBLE_H
#error Already included
#else
#define DEQUE_LONG_DOUBLE_H

#include <deque>
#include <cstdint>

class deque_long_double : public IContainer
{
    public:
        explicit deque_long_double(size_t cycles);
        ~deque_long_double() override = default;

        void run() override;

    private:
        std::deque<long double> m_buffer;
        size_t const m_cycles;

    public:
        deque_long_double() = delete;
};

#endif
