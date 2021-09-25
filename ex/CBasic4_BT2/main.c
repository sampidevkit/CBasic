#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char** argv)
{
    float diem[3];
    int i=0;
    
    LOOP:
    printf("\nNhap diem so mon thu %d: ", i+1);
    scanf("%f", &diem[i++]);
    
    if(i<3)
        goto LOOP;
    
    float diem_tb=(diem[0]+diem[1]+diem[2])/3;
    
    printf("\nDiem trung binh: %.1f\n", diem_tb);

    return (EXIT_SUCCESS);
}

