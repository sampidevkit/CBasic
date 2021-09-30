#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    FILE *fp;

    //    fp=fopen("vidu.txt", "w+");
    //    fprintf(fp, "Vi du kiem tra ham fprintf ...\n");
    //    fputs("Vi du kiem tra ham fputs ...\n", fp);
    //    fclose(fp);

    char buff[255];

    fp=fopen("vidu.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff);

    fgets(buff, 255, (FILE*) fp);
    printf("2: %s\n", buff);

    fgets(buff, 255, (FILE*) fp);
    printf("3: %s\n", buff);
    fclose(fp);


    return (EXIT_SUCCESS);
}

