#include <stdio.h>
#include <stdlib.h>

void vi_du_while(int i)
{
    printf("%s\n", __FUNCTION__); // in ten function hien tai

    while(i>0)
    {
        printf("%d\n", i);
        i--;
    }
}

void vi_du_do_while(int i)
{
    printf("%s\n", __FUNCTION__); // in ten function hien tai

    do
    {
        printf("%d\n", i);
        i--;
    }
    while(i>0);
}

void vi_du_for(int i)
{
    printf("%s\n", __FUNCTION__); // in ten function hien tai

    int j;

    for(j=i; j>0; j--)
    {
        printf("%d\n", j);
    }
}

void hien_thi_nhi_phan(char so)
{
    int i;

    printf("0b");
    
    for(i=0; i<8; i++)
    {
        if(so&0x80)
            printf("1");
        else
            printf("0");

        so<<=1;
    }
}

void vi_du_for_2(void)
{
    int i, PORTA;

    for(i=0; i<8; i++)
    {
        printf("\ni=%d: ", i);
        PORTA=(1<<i);
        hien_thi_nhi_phan((unsigned char) PORTA);
    }
}

int main(int argc, char** argv)
{
    //    int i=10;
    //
    //    vi_du_while(i);
    //    vi_du_do_while(i);
    //    vi_du_for(i);

    vi_du_for_2();

    printf("\nKet thuc\n");
    return (EXIT_SUCCESS);
}

