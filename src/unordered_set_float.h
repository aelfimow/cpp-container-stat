#ifdef UNORDERED_SET_FLOAT_H
#error Already included
#else
#define UNORDERED_SET_FLOAT_H

#include <unordered_set>

class unordered_set_float : public IContainer
{
    public:
        explicit unordered_set_float(size_t cycles);
        ~unordered_set_float() override = default;

        void run() override;

    private:
        std::unordered_set<float> m_buffer;
        size_t const m_cycles;

    public:
        unordered_set_float() = delete;
};

#endif
