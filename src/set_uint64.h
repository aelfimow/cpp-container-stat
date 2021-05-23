#ifdef SET_UINT64_H
#error Already included
#else
#define SET_UINT64_H

#include <set>
#include <cstdint>

class set_uint64 : public IContainer
{
    public:
        explicit set_uint64(size_t cycles);
        ~set_uint64() override = default;

        void run() override;

    private:
        std::set<uint64_t> m_buffer;
        size_t const m_cycles;

    public:
        set_uint64() = delete;
};

#endif
