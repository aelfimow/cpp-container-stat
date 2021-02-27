#ifdef LIST_UINT64_H
#error Already included
#else
#define LIST_UINT64_H

#include <list>
#include <cstdint>

class list_uint64 : public IContainer
{
    public:
        explicit list_uint64(size_t cycles);
        ~list_uint64() override = default;

        void run() override;

    private:
        std::list<uint64_t> m_buffer;
        size_t const m_cycles;

    public:
        list_uint64() = delete;
};

#endif
