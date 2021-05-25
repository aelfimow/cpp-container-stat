#ifdef MULTISET_UINT16_H
#error Already included
#else
#define MULTISET_UINT16_H

#include <set>
#include <cstdint>

class multiset_uint16 : public IContainer
{
    public:
        explicit multiset_uint16(size_t cycles);
        ~multiset_uint16() override = default;

        void run() override;

    private:
        std::multiset<uint16_t> m_buffer;
        size_t const m_cycles;

    public:
        multiset_uint16() = delete;
};

#endif
