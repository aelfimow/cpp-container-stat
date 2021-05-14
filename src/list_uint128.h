#ifdef LIST_UINT128_H
#error Already included
#else
#define LIST_UINT128_H

#include <list>
#include <cstdint>

class list_uint128 : public IContainer
{
    public:
        explicit list_uint128(size_t cycles);
        ~list_uint128() override = default;

        void run() override;

    private:
        std::list<unsigned __int128> m_buffer;
        size_t const m_cycles;

    public:
        list_uint128() = delete;
};

#endif
