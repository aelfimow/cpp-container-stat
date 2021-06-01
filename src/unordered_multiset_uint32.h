#ifdef UNORDERED_MULTISET_UINT32_H
#error Already included
#else
#define UNORDERED_MULTISET_UINT32_H

#include <unordered_set>
#include <cstdint>

class unordered_multiset_uint32 : public IContainer
{
    public:
        explicit unordered_multiset_uint32(size_t cycles);
        ~unordered_multiset_uint32() override = default;

        void run() override;

    private:
        std::unordered_multiset<uint32_t> m_buffer;
        size_t const m_cycles;

    public:
        unordered_multiset_uint32() = delete;
};

#endif
