#include <stdio.h>

extern "C"
{
    void start();
}

extern "C" void woof_char(int ascii)
{
    putchar((char)ascii);
}

extern "C" void woof_int(int val)
{
    printf("%d\n", val);
}

extern "C" void next_lime()
{
    putchar('\n');
}

extern "C" void woof_str(char* string)
{
    puts(string);
}

int main()
{
    start();
    return 0;
}