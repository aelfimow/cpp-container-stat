#ifdef MULTISET_UINT64_H
#error Already included
#else
#define MULTISET_UINT64_H

#include <set>
#include <cstdint>

class multiset_uint64 : public IContainer
{
    public:
        explicit multiset_uint64(size_t cycles);
        ~multiset_uint64() override = default;

        void run() override;

    private:
        std::multiset<uint64_t> m_buffer;
        size_t const m_cycles;

    public:
        multiset_uint64() = delete;
};

#endif
