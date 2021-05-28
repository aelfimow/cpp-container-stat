#ifdef UNORDERED_SET_UINT8_H
#error Already included
#else
#define UNORDERED_SET_UINT8_H

#include <unordered_set>
#include <cstdint>

class unordered_set_uint8 : public IContainer
{
    public:
        explicit unordered_set_uint8(size_t cycles);
        ~unordered_set_uint8() override = default;

        void run() override;

    private:
        std::unordered_set<uint8_t> m_buffer;
        size_t const m_cycles;

    public:
        unordered_set_uint8() = delete;
};

#endif
