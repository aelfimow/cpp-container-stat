#ifdef MULTISET_UINT8_H
#error Already included
#else
#define MULTISET_UINT8_H

#include <set>
#include <cstdint>

class multiset_uint8 : public IContainer
{
    public:
        explicit multiset_uint8(size_t cycles);
        ~multiset_uint8() override = default;

        void run() override;

    private:
        std::multiset<uint8_t> m_buffer;
        size_t const m_cycles;

    public:
        multiset_uint8() = delete;
};

#endif
