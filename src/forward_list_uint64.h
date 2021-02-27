#ifdef FORWARD_LIST_UINT64_H
#error Already included
#else
#define FORWARD_LIST_UINT64_H

#include <forward_list>
#include <cstdint>

class forward_list_uint64 : public IContainer
{
    public:
        explicit forward_list_uint64(size_t cycles);
        ~forward_list_uint64() override = default;

        void run() override;

    private:
        std::forward_list<uint64_t> m_buffer;
        size_t const m_cycles;

    public:
        forward_list_uint64() = delete;
};

#endif
