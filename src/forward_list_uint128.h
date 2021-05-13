#ifdef FORWARD_LIST_UINT128_H
#error Already included
#else
#define FORWARD_LIST_UINT128_H

#include <forward_list>
#include <cstdint>

class forward_list_uint128 : public IContainer
{
    public:
        explicit forward_list_uint128(size_t cycles);
        ~forward_list_uint128() override = default;

        void run() override;

    private:
        std::forward_list<unsigned __int128> m_buffer;
        size_t const m_cycles;

    public:
        forward_list_uint128() = delete;
};

#endif
