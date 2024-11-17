#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int *p;
    p=a;
    printf("\n value of p is %p",p);
    for (int i = 0; i < 5; i++)
    {
        printf("\n value of a[%d] = %d and *p is %d", i, a[i],*p);
        p+=1;
    }

}