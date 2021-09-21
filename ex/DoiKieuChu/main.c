#include <stdio.h>
#include <stdlib.h>

char IN_HOA(char in_thuong)
{
    if((in_thuong>='a')&&(in_thuong<='z'))
    {
        //return (in_thuong-32); // cach 1
        return (in_thuong&0b11011111); // cach 2
    }
    
    return in_thuong;
}

void doi_chuoi_INHOA(const char *chu_thuong)
{
    printf("%c", IN_HOA(chu_thuong[0]));
    printf("%c", IN_HOA(chu_thuong[1]));
    printf("%c", IN_HOA(chu_thuong[2]));
    printf("%c", IN_HOA(chu_thuong[3]));
}

int main(int argc, char** argv)
{
    char chuoi[8];
    
    printf("\nNhap vao chuoi 4 ki tu: ");
    scanf("%s", chuoi);
    printf("\nDoi kieu chu: ");
    doi_chuoi_INHOA(chuoi);
    printf("\n\n");
    
    return (EXIT_SUCCESS);
}

