#include <stdio.h>

extern "C"
{
    void start();
}

extern "C" void printchar(int ascii)
{
    putchar((char)ascii);
}

extern "C" void printint(int val)
{
    printf("%d\n", val);
}

extern "C" void nextLine()
{
    putchar('\n');
}

extern "C" int spaceship(int lhs, int rhs)
{
    if (newLhs > newRhs)
        return 1;
    else if (newLhs < newRhs)
        return -1;
    return 0;
}

int main()
{
    start();
    return 0;
}