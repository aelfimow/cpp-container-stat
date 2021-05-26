#ifdef MULTISET_FLOAT_H
#error Already included
#else
#define MULTISET_FLOAT_H

#include <set>
#include <cstdint>

class multiset_float : public IContainer
{
    public:
        explicit multiset_float(size_t cycles);
        ~multiset_float() override = default;

        void run() override;

    private:
        std::multiset<float> m_buffer;
        size_t const m_cycles;

    public:
        multiset_float() = delete;
};

#endif
