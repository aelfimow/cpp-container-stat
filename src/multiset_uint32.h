#ifdef MULTISET_UINT32_H
#error Already included
#else
#define MULTISET_UINT32_H

#include <set>
#include <cstdint>

class multiset_uint32 : public IContainer
{
    public:
        explicit multiset_uint32(size_t cycles);
        ~multiset_uint32() override = default;

        void run() override;

    private:
        std::multiset<uint32_t> m_buffer;
        size_t const m_cycles;

    public:
        multiset_uint32() = delete;
};

#endif
