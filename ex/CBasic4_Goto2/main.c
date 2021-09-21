#include <stdio.h>
#include <stdlib.h>

void num_of_bit(unsigned long so)
{
    int i=0;

    printf("\nSo %d la so ", so);

LOOP:
    if(so>0)
    {
        i+=8;
        so=so>>8;
        goto LOOP;
    }

    printf("%d bit", i);
}

int main(int argc, char** argv)
{
    unsigned long so;

    printf("\nNhap vao 1 so: ");
    scanf("%d", &so);
    num_of_bit(so);
    printf("\n\n");

    return (EXIT_SUCCESS);
}

