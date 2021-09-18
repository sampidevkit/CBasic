#include <stdio.h> // su dung printf
#include <stdlib.h>

/*
 Đầu vào: không có
 Đầu ra: không có
 */
void ten_ct00() // Không nên
{

}

/*
 Đầu vào: không có
 Đầu ra: không có
 */
void ten_ct01(void) // Tiêu chuẩn
{

}

/*
 Đầu vào: 1
 Đầu ra: không có
 */
void ten_ct02(int i)
{

}

/*
 Đầu vào: 1
 Đầu ra: không có
 */
void ten_ct03(int *i)
{

}

/*
 Đầu vào: 2
 Đầu ra: không có
 */
void ten_ct04(int i, int j)
{

}


char cong_2so(char so1, char so2)
{
    char ket_qua=so1+so2;

    return ket_qua;
}

// Nhap vao 4 ki tu, neu la chu thuong thi chuyen thanh chu in hoa
// su dung mang, dieu kien, phep +/-

void doi_chuoi(char *in, char *out) // ve nha lam
{

}

char doi_kt(char chu_hoa)
{
    if((chu_hoa>='A')&&(chu_hoa<='Z'))
    {
        return chu_hoa+32;
    }

    return chu_hoa;
}

void phep_or_2dk(int a, int b)
{
    if((a>10)||(b>10))
    {
        printf("Co it nhat 1 so lon hon 10\n");
    }
    else
    {
        printf("Ko so nao lon hon 10\n");
    }
}

int main(int argc, char** argv)
{
    //    unsigned char i=250; // 8bit
    //    unsigned int j=100; // 8bit
    //    unsigned int k; //=(unsigned int)i*j;
    //
    //    // k=i*j
    //    k=i;
    //    //k=k*j;
    //    k*=j;
    //    
    //    float f=3.14;
    //    
    //    printf("%08d\n", k);
    //    printf("%f\n", f);

    // char kq=cong_2so(35, 45);

    // printf("%d\n", kq);

    //char ten_bien0, ten_bien1, /*...*/ ten_bien_8;
    //char ten_bien[8];

    //    char chu_hoa;
    //
    //    printf("Nhap vao 1 ki tu: ");
    //    scanf("%c", &chu_hoa);
    //
    //    printf("%c\n", doi_kt(chu_hoa));

//    unsigned int a, b, c;
//
//    a=3;
//    b=5;
//
//    c=a&b; // a and b
//    printf("a&b=%04X\n", c);
//
//    c=a|b; // a or b
//    printf("a|b=%04X\n", c);
//
//    c=a^b; // a xor b
//    printf("a^b=%04X\n", c);
//
//    c=!a; // a bit invert
//    printf("!a=%04X\n", c);
//
//    c=~a; // a byte invert
//    printf("~a=%04X\n", c);

    phep_or_2dk(11, 2);
    
    return (EXIT_SUCCESS);
}

