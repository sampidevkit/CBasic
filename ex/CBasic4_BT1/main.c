#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char** argv)
{
    uint32_t so;

    printf("\nNhap vao 1 so: ");
    scanf("%d", &so);

    int i=0;

    printf("\nSo %d la so ", so);
    
    if(so==0)
    {
        i=1;
        goto EXIT;
    }
    
LOOP:
    if(so>0)
    {
        i++;
        so=so>>1;
        goto LOOP;
    }

EXIT:
    printf("%d bit(s)\n", i);

    return (EXIT_SUCCESS);
}

