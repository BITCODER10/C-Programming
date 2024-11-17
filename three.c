#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;

    fp= fopen("test.csv","r");
    while(1)
    {
        ch=getc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
