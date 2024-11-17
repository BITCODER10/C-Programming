#include <stdio.h>
int main()
{
    int x[3][3]={
    {2,3,5},
    {7,11,13},
    {17,19,23}
    };

    printf("\n printing x[0][0] : %d",x[0][0]);
    printf("\n printing x[1][0] : %d",x[1][0]);
    printf("\n x is %p",x);
    printf("\n *(x+1) is %p",*(x+1));
    printf("\n (x+1) is %p",(x+1));
    printf("\n *(*(x+1)+2) is %d",*(*(x+1)+2));
}
