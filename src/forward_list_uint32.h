#ifdef FORWARD_LIST_UINT32_H
#error Already included
#else
#define FORWARD_LIST_UINT32_H

#include <forward_list>
#include <cstdint>

class forward_list_uint32 : public IContainer
{
    public:
        explicit forward_list_uint32(size_t cycles);
        ~forward_list_uint32() override = default;

        void run() override;

    private:
        std::forward_list<uint32_t> m_buffer;
        size_t const m_cycles;

    public:
        forward_list_uint32() = delete;
};

#endif
