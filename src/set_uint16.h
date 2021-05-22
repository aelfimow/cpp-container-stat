#ifdef SET_UINT16_H
#error Already included
#else
#define SET_UINT16_H

#include <set>
#include <cstdint>

class set_uint16 : public IContainer
{
    public:
        explicit set_uint16(size_t cycles);
        ~set_uint16() override = default;

        void run() override;

    private:
        std::set<uint16_t> m_buffer;
        size_t const m_cycles;

    public:
        set_uint16() = delete;
};

#endif
