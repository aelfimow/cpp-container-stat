#ifdef SET_FLOAT128_H
#error Already included
#else
#define SET_FLOAT128_H

#include <set>
#include <cstdint>

class set_float128 : public IContainer
{
    public:
        explicit set_float128(size_t cycles);
        ~set_float128() override = default;

        void run() override;

    private:
        std::set<__float128> m_buffer;
        size_t const m_cycles;

    public:
        set_float128() = delete;
};

#endif
