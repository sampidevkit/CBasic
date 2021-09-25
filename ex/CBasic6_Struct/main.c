#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

struct
{
    int len;
    char data[128];
} Buffer;

int main(int argc, char** argv)
{
    printf("Nhap vao 1 chuoi: ");
    scanf("%s", Buffer.data);
    Buffer.len=strlen(Buffer.data);
    printf("\nBan da nhap chuoi: %s", Buffer.data);
    printf("\nDo dai la: %d", Buffer.len);

    printf("\nExit\n");
    return (EXIT_SUCCESS);
}

