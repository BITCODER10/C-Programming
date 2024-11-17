#include <stdio.h>
#include <string.h>
int main()
{
    char *s= "INDIA";
    char *b= "BHARAT";
    char *t="THAT IS";
    for(int i=0; i<=5;i++)
    {
        printf("\n value of s[%d] is %c",i,s[i]);
    }
    printf("\n Length of the INDIA is %lu",strlen(s));
}