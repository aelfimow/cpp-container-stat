#ifdef SET_FLOAT_H
#error Already included
#else
#define SET_FLOAT_H

#include <set>
#include <cstdint>

class set_float : public IContainer
{
    public:
        explicit set_float(size_t cycles);
        ~set_float() override = default;

        void run() override;

    private:
        std::set<float> m_buffer;
        size_t const m_cycles;

    public:
        set_float() = delete;
};

#endif
