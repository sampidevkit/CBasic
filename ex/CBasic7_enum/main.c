#include <stdio.h>
#include <stdlib.h>

//#define TEN1 0
//#define TEN2 1
//#define TEN3 2
//#define TEN4 3

enum
{
    TEN1=0,
    TEN2, // 1
    TEN3, // 2
    TEN4, // 3
    TEN5=2,
    TEN6
};

int main(int argc, char** argv)
{
    printf("%d\n", TEN1);
    printf("%d\n", TEN2);
    printf("%d\n", TEN3);
    printf("%d\n", TEN4);
    printf("%d\n", TEN5);
    printf("%d\n", TEN6);
    
    return (EXIT_SUCCESS);
}