#ifdef LIST_UINT32_H
#error Already included
#else
#define LIST_UINT32_H

#include <list>
#include <cstdint>

class list_uint32 : public IContainer
{
    public:
        explicit list_uint32(size_t cycles);
        ~list_uint32() override = default;

        void run() override;

    private:
        std::list<uint32_t> m_buffer;
        size_t const m_cycles;

    public:
        list_uint32() = delete;
};

#endif
