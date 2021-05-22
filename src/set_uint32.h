#ifdef SET_UINT32_H
#error Already included
#else
#define SET_UINT32_H

#include <set>
#include <cstdint>

class set_uint32 : public IContainer
{
    public:
        explicit set_uint32(size_t cycles);
        ~set_uint32() override = default;

        void run() override;

    private:
        std::set<uint32_t> m_buffer;
        size_t const m_cycles;

    public:
        set_uint32() = delete;
};

#endif
