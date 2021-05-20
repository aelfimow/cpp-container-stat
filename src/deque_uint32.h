#ifdef DEQUE_UINT32_H
#error Already included
#else
#define DEQUE_UINT32_H

#include <deque>
#include <cstdint>

class deque_uint32 : public IContainer
{
    public:
        explicit deque_uint32(size_t cycles);
        ~deque_uint32() override = default;

        void run() override;

    private:
        std::deque<uint32_t> m_buffer;
        size_t const m_cycles;

    public:
        deque_uint32() = delete;
};

#endif
