#include <stdio.h>
#include <stdlib.h>

void num_of_bit(unsigned long so)
{

}

int main(int argc, char** argv)
{
    unsigned int so[10]; // khai báo không có giá trị khởi tạo
    unsigned int so1[10]={0, 2, 3}; // khai báo có giá trị khởi tạo

    int arr[3][5]={
        {5, 12, 17, 9, 3}, // 0
        {13, 4, 8, 14, 1}, // 1
        {9, 6, 3, 7, 21}   // 2
      // 0  1  2  3  4
    };

    printf("%d", arr[2][4]);
    //    so[0]=100;
    //    printf("%d", so[0]+so1[2]);


    printf("\n");
    return (EXIT_SUCCESS);
}

