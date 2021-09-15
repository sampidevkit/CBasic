#include <stdio.h>
// Macro
#define PI  3.14

/* Phép toán
 phep cong, tru, nhan:       + - *
 phep chia lay phan nguyen: /
 phep chia lay phan du: %
 phep nhan cho so 2^n: a*2, *4, *8 <=> a*(2^n)=a<<n (a dich trai n bit)
 phep chia cho so 2^n: a/(2^n)=a>>n (a dich phai n bit)
 */

/* phenp so sanh
 lon hon >
 be hon <
 lon hon hoac bang >=
 be hon hoac bang <=
 so sanh bang ==
 so sanh khac nhau: !=
 
 */



int main(int argc, char** argv)
{
//    int nam_sinh1, nam_sinh2;
//    
//    printf("Nhap nam sinh nguoi 1: ");
//    scanf("%d", &nam_sinh1);
//    printf("\nNhap nam sinh nguoi 2: ");
//    scanf("%d", &nam_sinh2);
//
//    if(nam_sinh1>nam_sinh2)
//    {
//        printf("\nNguoi thu 1 nho tuoi hon");
//    }
//    else if(nam_sinh1==nam_sinh2)
//    {
//        printf("\n2 nguoi bang tuoi\n");
//    }
//    else
//    {
//        printf("\nNguoi thu 2 nho tuoi hon\n");
//    }
    
    printf("12/7=%d\n", (12/7));
    printf("12%%7=%d\n", (12%7));
    
    printf("12*4=%d\n", (12*4));
    printf("12<<2=%d\n", (12<<2));
    
    return 0;
}