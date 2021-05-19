#ifdef LIST_DOUBLE_H
#error Already included
#else
#define LIST_DOUBLE_H

#include <list>
#include <cstdint>

class list_double : public IContainer
{
    public:
        explicit list_double(size_t cycles);
        ~list_double() override = default;

        void run() override;

    private:
        std::list<double> m_buffer;
        size_t const m_cycles;

    public:
        list_double() = delete;
};

#endif
