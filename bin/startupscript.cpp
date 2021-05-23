#include <stdio.h>

extern "C"
{
    void start();
}

extern "C" void woofChar(int ascii)
{
    putchar((char)ascii);
}

extern "C" void woofInt(int val)
{
    printf("%d\n", val);
}

extern "C" void nextLime()
{
    putchar('\n');
}

extern "C" void woofStr(char* string)
{
    puts(string);
}

int main()
{
    start();
    return 0;
}