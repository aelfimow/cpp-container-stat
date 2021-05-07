#ifdef LIST_STRING_H
#error Already included
#else
#define LIST_STRING_H

#include <list>
#include <string>

class list_string : public IContainer
{
    public:
        explicit list_string(size_t cycles);
        ~list_string() override = default;

        void run() override;

    private:
        std::list<std::string> m_buffer;
        size_t const m_cycles;

    public:
        list_string() = delete;
};

#endif
