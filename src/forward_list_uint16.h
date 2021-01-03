#ifdef FORWARD_LIST_UINT16_H
#error Already included
#else
#define FORWARD_LIST_UINT16_H

#include <forward_list>
#include <cstdint>

class forward_list_uint16 : public IContainer
{
    public:
        explicit forward_list_uint16(size_t cycles);
        ~forward_list_uint16() override = default;

        void run() override;

    private:
        std::forward_list<uint16_t> m_buffer;
        size_t const m_cycles;

    public:
        forward_list_uint16() = delete;
};

#endif
