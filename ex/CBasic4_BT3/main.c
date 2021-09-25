#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char** argv)
{
    float diem[3][3];
    float diem_tb;
    int mon=0, cot;

LOOP1:
    printf("Nhap diem mon thu %d:", mon+1);
    printf("\n            Cot 10%%: ");
    scanf("%f", &diem[mon][0]);
    printf("\n            Cot 20%%: ");
    scanf("%f", &diem[mon][1]);
    printf("\n            Cot 70%%: ");
    scanf("%f", &diem[mon][2]);

    if(++mon<3) 
        goto LOOP1;

    mon=0;
    cot=0;
    diem_tb=0;
    
LOOP2:
    diem_tb+=diem[mon][cot];

    if(++cot<3)
        goto LOOP2;
    else
    {
        cot=0;

        if(++mon<3)
            goto LOOP2;
    }

    printf("\nDiem tb=%.1f\n", diem_tb/9);

    return (EXIT_SUCCESS);
}

