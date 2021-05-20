#ifdef DEQUE_UINT8_H
#error Already included
#else
#define DEQUE_UINT8_H

#include <deque>
#include <cstdint>

class deque_uint8 : public IContainer
{
    public:
        explicit deque_uint8(size_t cycles);
        ~deque_uint8() override = default;

        void run() override;

    private:
        std::deque<uint8_t> m_buffer;
        size_t const m_cycles;

    public:
        deque_uint8() = delete;
};

#endif
