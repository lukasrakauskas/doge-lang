#include <stdio.h>
#include <stdlib.h>

extern "C"
{
    void start();
}

extern "C" void next_lime()
{
    putchar('\n');
}

extern "C" void woof_char(int ascii)
{
    putchar((char)ascii);
}

extern "C" void woof_int(int val)
{
    printf("%d\n", val);
}

extern "C" void woof_float(double val)
{
    printf("%lf\n", val);
}

extern "C" void woof_bool(bool val)
{
    if(val) puts("good");
    else puts("bad");
}

extern "C" void woof_str(char* string)
{
    puts(string);
}

extern "C" void woof_int_to_file(char* file, int val)
{
    FILE* f = fopen(file, "wb+");
    if(f != NULL)
    {
        fprintf(f, "%d", val);
        fclose(f);
    }
}

extern "C" void woof_string_to_file(char* file, char* val)
{
    FILE* f = fopen(file, "wb+");
    if(f != NULL)
    {
        fprintf(f, "%s", val);
        fclose(f);
    }
}

extern "C" void woof_char_to_file(char* file, int val)
{
    FILE* f = fopen(file, "wb+");
    if(f != NULL)
    {
        fprintf(f, "%c", (char)val);
        fclose(f);
    }
}

extern "C" void woof_bool_to_file(char* file, bool val)
{
    FILE* f = fopen(file, "wb+");
    if(f != NULL)
    {
        if(val) fprintf(f, "good");
        else fprintf(f, "bad");
        fclose(f);
    }
}

extern "C" void woof_float_to_file(char* file, double val)
{
    FILE* f = fopen(file, "wb+");
    if(f != NULL)
    {
        fprintf(f, "%lf", val);
        fclose(f);
    }
}

int main()
{
    start();
    return 0;
}