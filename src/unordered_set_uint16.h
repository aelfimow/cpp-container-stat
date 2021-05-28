#ifdef UNORDERED_SET_UINT16_H
#error Already included
#else
#define UNORDERED_SET_UINT16_H

#include <unordered_set>
#include <cstdint>

class unordered_set_uint16 : public IContainer
{
    public:
        explicit unordered_set_uint16(size_t cycles);
        ~unordered_set_uint16() override = default;

        void run() override;

    private:
        std::unordered_set<uint16_t> m_buffer;
        size_t const m_cycles;

    public:
        unordered_set_uint16() = delete;
};

#endif
