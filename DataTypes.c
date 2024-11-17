#include <stdio.h>
int main()
{
    printf("\n Size of Int :%lu",sizeof(int));
    printf("\n Size of Long Int :%lu",sizeof(long int));
    printf("\n Size of unsigned long Long Int :%lu",sizeof(unsigned long long int));
    printf("\n Size of Short Int %lu:",sizeof(short int));
    printf("\n Size of char :%lu",sizeof(char));
    printf("\n Size of unsigned char :%lu",sizeof(unsigned char));
    printf("\n Size of signed char :%lu",sizeof(signed char));
    printf("\n Size of Float :%lu",sizeof(float));
    printf("\n Size of double :%lu",sizeof(double));
    printf("\n Size of long double :%lu",sizeof( long double ));

    long double t,b,pi;
    t=22.0;
    b=7.0;
    pi=t/b;
    printf("\n Value of pie is :%Lf",pi);
    return 0;
}