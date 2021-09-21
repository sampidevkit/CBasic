#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    unsigned int so;

    printf("\nNhap vao 1 so: ");
    scanf("%d", &so);
    printf("%d = 0b", (unsigned char) so);

    printf("%d", (so>>7)&0b00000001); // in bit 7
    printf("%d", (so>>6)&0b00000001); // in bit 6
    printf("%d", (so>>5)&0b00000001); // in bit 5
    printf("%d", (so>>4)&0b00000001); // in bit 4
    printf("%d", (so>>3)&0b00000001); // in bit 3
    printf("%d", (so>>2)&0b00000001); // in bit 2
    printf("%d", (so>>1)&0b00000001); // in bit 1
    printf("%d", so&0b00000001); // in bit 0

    printf("\n\n");

    return (EXIT_SUCCESS);
}

