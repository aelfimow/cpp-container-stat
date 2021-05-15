#ifdef MAP_STRING_H
#error Already included
#else
#define MAP_STRING_H

#include <map>
#include <string>

class map_string : public IContainer
{
    public:
        explicit map_string(size_t cycles);
        ~map_string() override = default;

        void run() override;

    private:
        std::map<size_t, std::string> m_buffer;
        size_t const m_cycles;

    public:
        map_string() = delete;
};

#endif
