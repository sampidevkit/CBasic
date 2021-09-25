#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char** argv)
{
    float diem[3][3];
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

    float he_so[3]={0.1, 0.2, 0.7};
    float diem_tb[3]={0.0, 0.0, 0.0};

LOOP2:
    diem_tb[mon]+=diem[mon][cot]*he_so[cot];

    if(++cot<3)
        goto LOOP2;
    else
    {
        cot=0;
        printf("\nDiem TB mon %d=%.1f", mon+1, diem_tb[mon]);

        if(++mon<3)
            goto LOOP2;
    }

    printf("\nDiem tb=%.1f\n", (diem_tb[0]+diem_tb[1]+diem_tb[2])/3);

    return (EXIT_SUCCESS);
}

