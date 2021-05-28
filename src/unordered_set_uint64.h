#ifdef UNORDERED_SET_UINT64_H
#error Already included
#else
#define UNORDERED_SET_UINT64_H

#include <unordered_set>
#include <cstdint>

class unordered_set_uint64 : public IContainer
{
    public:
        explicit unordered_set_uint64(size_t cycles);
        ~unordered_set_uint64() override = default;

        void run() override;

    private:
        std::unordered_set<uint64_t> m_buffer;
        size_t const m_cycles;

    public:
        unordered_set_uint64() = delete;
};

#endif
