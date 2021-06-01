#ifdef UNORDERED_MULTISET_UINT16_H
#error Already included
#else
#define UNORDERED_MULTISET_UINT16_H

#include <unordered_set>
#include <cstdint>

class unordered_multiset_uint16 : public IContainer
{
    public:
        explicit unordered_multiset_uint16(size_t cycles);
        ~unordered_multiset_uint16() override = default;

        void run() override;

    private:
        std::unordered_multiset<uint16_t> m_buffer;
        size_t const m_cycles;

    public:
        unordered_multiset_uint16() = delete;
};

#endif
