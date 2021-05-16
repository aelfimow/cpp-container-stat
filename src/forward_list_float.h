#ifdef FORWARD_LIST_FLOAT_H
#error Already included
#else
#define FORWARD_LIST_FLOAT_H

#include <forward_list>
#include <cstdint>

class forward_list_float : public IContainer
{
    public:
        explicit forward_list_float(size_t cycles);
        ~forward_list_float() override = default;

        void run() override;

    private:
        std::forward_list<float> m_buffer;
        size_t const m_cycles;

    public:
        forward_list_float() = delete;
};

#endif
