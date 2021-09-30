#include <stdio.h>
#include <stdlib.h>

#ifdef NULL
#undef NULL
#define NULL 0x00
#endif

#ifdef EXIT_SUCCESS

void hello(void)
{
    printf("\nhello\n");
}
#else
void hello(void)
{
    printf("\nHi\n");
}
#endif

int x=10;

#if(EXIT_SUCCESS==0)
void hi(void)
{
    printf("\nHi\n");
}
#endif

#if defined(__HELLO__)
void hello1(void)
{
    printf("\nHello\n");
}
#else
void hello1(void)
{
    printf("\nHi\n");
}
#endif

int main(int argc, char** argv)
{
    hello1();
    return (EXIT_SUCCESS);
}

