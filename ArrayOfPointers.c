#include <stdio.h>
int main()
{
    int a=10, b=20, c=30;
    int *p[3];
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    printf("\n This is the value of p : %p",p);
    for (int i = 0; i < 3; i++)
    {
       printf("\n This is the value of p[%d] : %d",i, *p[i]);
    }
}
