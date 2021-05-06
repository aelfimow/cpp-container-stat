#ifdef FORWARD_LIST_STRING_H
#error Already included
#else
#define FORWARD_LIST_STRING_H

#include <forward_list>
#include <string>

class forward_list_string : public IContainer
{
    public:
        explicit forward_list_string(size_t cycles);
        ~forward_list_string() override = default;

        void run() override;

    private:
        std::forward_list<std::string> m_buffer;
        size_t const m_cycles;

    public:
        forward_list_string() = delete;
};

#endif
