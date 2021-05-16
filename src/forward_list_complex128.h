#ifdef FORWARD_LIST_COMPLEX128_H
#error Already included
#else
#define FORWARD_LIST_COMPLEX128_H

#include <forward_list>
#include <cstdint>

class forward_list_complex128 : public IContainer
{
    public:
        explicit forward_list_complex128(size_t cycles);
        ~forward_list_complex128() override = default;

        void run() override;

    private:
        std::forward_list<__complex128> m_buffer;
        size_t const m_cycles;

    public:
        forward_list_complex128() = delete;
};

#endif
