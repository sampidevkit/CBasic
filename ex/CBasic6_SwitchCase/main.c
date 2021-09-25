#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    printf("\nHELP:\n");
    printf("\n[1]: \"Hello\"");
    printf("\n[2]: \"C Basic\"");
    printf("\n[3]: Random number");
    printf("\n[e] or [E]: Exit\n");

    while(1)
    {
        char c=getchar();

//        if(c=='1')
//            printf("\"Hello\"\n");
//        else if(c=='2')
//            printf("\"C Basic\"\n");
//        else if(c=='3')
//        {
//            int rnd=rand();
//
//            printf("%08X\n", rnd);
//        }
//        else if((c=='e')||(c=='E'))
//            goto EXIT;
//        else if((c=='\n')||(c=='\r'))
//            ;
//        else
//            printf("\nBad command\n");
        
        switch(c)
        {
            case '1':
                printf("\"Hello\"\n");
                break;

            case '2':
                printf("\"C Basic\"\n");
                break;

            case '3':
            {
                int rnd=rand();

                printf("%08X\n", rnd);
            }
                break;

            case 'e':
            case 'E':
                goto EXIT;

            case '\r':
            case '\n':
                break;
                
            default:
                printf("\nBad command\n");
                break;
        }
    }

EXIT:
    printf("Exit\n");
    return (EXIT_SUCCESS);
}

