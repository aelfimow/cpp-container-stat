#ifdef FORWARD_LIST_FLOAT128_H
#error Already included
#else
#define FORWARD_LIST_FLOAT128_H

#include <forward_list>
#include <cstdint>

class forward_list_float128 : public IContainer
{
    public:
        explicit forward_list_float128(size_t cycles);
        ~forward_list_float128() override = default;

        void run() override;

    private:
        std::forward_list<__float128> m_buffer;
        size_t const m_cycles;

    public:
        forward_list_float128() = delete;
};

#endif
