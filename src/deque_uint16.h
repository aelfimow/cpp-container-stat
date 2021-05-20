#ifdef DEQUE_UINT16_H
#error Already included
#else
#define DEQUE_UINT16_H

#include <deque>
#include <cstdint>

class deque_uint16 : public IContainer
{
    public:
        explicit deque_uint16(size_t cycles);
        ~deque_uint16() override = default;

        void run() override;

    private:
        std::deque<uint16_t> m_buffer;
        size_t const m_cycles;

    public:
        deque_uint16() = delete;
};

#endif
