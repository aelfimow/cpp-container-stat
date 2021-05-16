#ifdef FORWARD_LIST_LONG_DOUBLE_H
#error Already included
#else
#define FORWARD_LIST_LONG_DOUBLE_H

#include <forward_list>
#include <cstdint>

class forward_list_long_double : public IContainer
{
    public:
        explicit forward_list_long_double(size_t cycles);
        ~forward_list_long_double() override = default;

        void run() override;

    private:
        std::forward_list<long double> m_buffer;
        size_t const m_cycles;

    public:
        forward_list_long_double() = delete;
};

#endif
