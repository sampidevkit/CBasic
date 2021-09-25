#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

union
{
    uint8_t val;

    struct
    {
        unsigned RA0:1;
        unsigned RA1:1;
        unsigned RA2:1;
        unsigned RA3:1;
        unsigned RA4:1;
        unsigned RA5:1;
        unsigned RA6:1;
        unsigned RA7:1;
    };
} PORTAbits;

void hien_thi(uint8_t so)
{
    int i;

    printf("0b");

    for(i=0; i<8; i++)
    {
        printf("%d", (so>>7)&1);
        so<<=1;
    }
}

int main(int argc, char** argv)
{
    PORTAbits.val=0x00;
    printf("\nPORTA=");
    hien_thi(PORTAbits.val);

    PORTAbits.RA5=1;
    printf("\nPORTA=");
    hien_thi(PORTAbits.val);

    printf("\nExit\n");
    return (EXIT_SUCCESS);
}

