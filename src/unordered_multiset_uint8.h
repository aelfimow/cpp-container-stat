#ifdef UNORDERED_MULTISET_UINT8_H
#error Already included
#else
#define UNORDERED_MULTISET_UINT8_H

#include <unordered_set>
#include <cstdint>

class unordered_multiset_uint8 : public IContainer
{
    public:
        explicit unordered_multiset_uint8(size_t cycles);
        ~unordered_multiset_uint8() override = default;

        void run() override;

    private:
        std::unordered_multiset<uint8_t> m_buffer;
        size_t const m_cycles;

    public:
        unordered_multiset_uint8() = delete;
};

#endif
