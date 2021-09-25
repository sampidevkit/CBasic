#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <windows.h>

void hien_thi(uint8_t so)
{
    int i;

    //printf("0b");
    printf("\n");

    for(i=0; i<8; i++)
    {
        printf("%d", (so>>7)&1);
        so<<=1;
    }
}

int main(int argc, char** argv)
{
    uint8_t LAT;
    int i, j=0;

    do
    {
        /*
            i=0: 0b11111110
            i=1: 0b11111101
            i=2: 0b11111011
            i=3: 0b11110111
            i=4: 0b11101111
            i=5: 0b11011111
            i=6: 0b10111111
            i=7: 0b01111111
         */
        for(i=0, LAT=0b00000001; i<8; i++)
        {
            //printf("\n%d: ", i);
            hien_thi(~LAT);
            LAT<<=1;
            Sleep(100); // delay 100ms
        }

        /*
            i=0: 0b01111111 // bo
            i=1: 0b10111111
            i=2: 0b11011111
            i=3: 0b11101111
            i=4: 0b11110111
            i=5: 0b11111011
            i=6: 0b11111101
            i=7: 0b11111110 // bo
         */

        for(i=1, LAT=0b01000000; i<7; i++)
        {
            //printf("\n%d: ", i);
            hien_thi(~LAT);
            LAT>>=1;
            Sleep(100); // delay 100ms
        }
    }
    while(++j<10);
    
    printf("\n");
    return (EXIT_SUCCESS);
}

