#include <cstdio>

int global_array[100] = {-1};

class QSomething
{
public:
    QSomething() = default;
    ~QSomething() = default;

    int doGlobalBufferOverflow(int argc)
    {
        return global_array[argc + 100];
    }

    void doMemoryLeak()
    {
        int *x = new int(10);
    }
};

class QAnother
{
public:
    QAnother() = default;
    ~QAnother() = default;

    int doGlobalBufferOverflow(int argc)
    {
        return global_array[argc + 100];
    }

    void doMemoryLeak()
    {
        int *x = new int(10);
    }
};

int main(int argc, char **argv, char **envp)
{
    QSomething something;
    something.doMemoryLeak();
    something.doGlobalBufferOverflow(argc);

    QAnother another;
    another.doMemoryLeak();
    another.doGlobalBufferOverflow(argc);

    return 0;
}
