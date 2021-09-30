#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef char i8_t;

typedef struct BUFFER_T
{
    char len;
    uint16_t data[128];
    struct BUFFER_T *pD;
} buffer_t;

int main(int argc, char** argv)
{
    int *pD=calloc(1024, sizeof(int));
    free(pD);
    
    int mang[1024];
    
    buffer_t A, B, C;
    
    A.len=10;
    B.len=100;
    C.len=120;

    A.pD=&B;
    B.pD=&C;
    
    printf("%d\n", A.len);
    printf("%d\n", A.pD->len);
    
    return (EXIT_SUCCESS);
}