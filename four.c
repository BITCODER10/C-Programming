#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, *p, **q;
    i=100;
    p= &i;
    q=&p;
    printf("\n value of i %d",i);
    printf("\n address of i %p",&i);
    printf("\n value of p %p",p);
    printf("\n address of p %p",&p);
    printf("\n value of q %p",q);
    printf("\n address of q %p",&q);
    printf("\n **q:%d \t *p:%d \t i:%d",**q,*p,i);

    printf("\n size of i :%lu ",sizeof(int));
    printf("\n size of int* :%lu ",sizeof(int*));
    printf("\n size of int** :%lu ",sizeof(int**));
    return 0;
}