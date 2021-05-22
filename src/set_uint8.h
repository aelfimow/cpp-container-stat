#ifdef SET_UINT8_H
#error Already included
#else
#define SET_UINT8_H

#include <set>
#include <cstdint>

class set_uint8 : public IContainer
{
    public:
        explicit set_uint8(size_t cycles);
        ~set_uint8() override = default;

        void run() override;

    private:
        std::set<uint8_t> m_buffer;
        size_t const m_cycles;

    public:
        set_uint8() = delete;
};

#endif
