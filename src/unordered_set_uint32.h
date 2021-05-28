#ifdef UNORDERED_SET_UINT32_H
#error Already included
#else
#define UNORDERED_SET_UINT32_H

#include <unordered_set>
#include <cstdint>

class unordered_set_uint32 : public IContainer
{
    public:
        explicit unordered_set_uint32(size_t cycles);
        ~unordered_set_uint32() override = default;

        void run() override;

    private:
        std::unordered_set<uint32_t> m_buffer;
        size_t const m_cycles;

    public:
        unordered_set_uint32() = delete;
};

#endif
