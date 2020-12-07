#ifdef CPP_CONTAINER_H
#error Already included
#else
#define CPP_CONTAINER_H

class IContainer;

class CppContainer
{
    public:
        static IContainer *instantiate(std::string const &type, size_t cycles);

    public:
        CppContainer() = delete;
        CppContainer(CppContainer const &inst) = delete;
        ~CppContainer() = delete;
};

#endif
