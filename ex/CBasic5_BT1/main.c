#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char** argv)
{
    char chuoi[128];
    int i=0;

    printf("\nNhap vao 1 chuoi: ");
    //    scanf("%s", chuoi);

    while(1)
    {
        chuoi[i]=getchar();

        if((chuoi[i]=='\r')||(chuoi[i]=='\n'))
        {
            chuoi[i]=0x00;
            break;
        }
        
        i++;
    }

    i=0;

    while(chuoi[i]!=0x00)
    {
        printf("%c: %02X\n", chuoi[i], chuoi[i]);
        i++;
    }

    return (EXIT_SUCCESS);
}

