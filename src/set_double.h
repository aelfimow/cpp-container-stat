#ifdef SET_DOUBLE_H
#error Already included
#else
#define SET_DOUBLE_H

#include <set>
#include <cstdint>

class set_double : public IContainer
{
    public:
        explicit set_double(size_t cycles);
        ~set_double() override = default;

        void run() override;

    private:
        std::set<double> m_buffer;
        size_t const m_cycles;

    public:
        set_double() = delete;
};

#endif
