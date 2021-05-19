#ifdef LIST_FLOAT128_H
#error Already included
#else
#define LIST_FLOAT128_H

#include <list>
#include <cstdint>

class list_float128 : public IContainer
{
    public:
        explicit list_float128(size_t cycles);
        ~list_float128() override = default;

        void run() override;

    private:
        std::list<__float128> m_buffer;
        size_t const m_cycles;

    public:
        list_float128() = delete;
};

#endif
