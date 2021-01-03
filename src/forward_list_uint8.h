#ifdef FORWARD_LIST_UINT8_H
#error Already included
#else
#define FORWARD_LIST_UINT8_H

#include <forward_list>
#include <cstdint>

class forward_list_uint8 : public IContainer
{
    public:
        explicit forward_list_uint8(size_t cycles);
        ~forward_list_uint8() override = default;

        void run() override;

    private:
        std::forward_list<uint8_t> m_buffer;
        size_t const m_cycles;

    public:
        forward_list_uint8() = delete;
};

#endif
