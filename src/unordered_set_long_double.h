#ifdef UNORDERED_SET_LONG_DOUBLE_H
#error Already included
#else
#define UNORDERED_SET_LONG_DOUBLE_H

#include <unordered_set>

class unordered_set_long_double : public IContainer
{
    public:
        explicit unordered_set_long_double(size_t cycles);
        ~unordered_set_long_double() override = default;

        void run() override;

    private:
        std::unordered_set<long double> m_buffer;
        size_t const m_cycles;

    public:
        unordered_set_long_double() = delete;
};

#endif
