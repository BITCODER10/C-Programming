#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int factorial(long long int);
int main()
{
    long long int number;
    printf("\n Please Enter the number :");
    scanf("%lld",&number);
    long long int result=factorial(number);
    printf("\nsize of long long int %lu \n",sizeof(long long int));
    printf("\n Factorial is :%lld", result);
    return 0;
}

long long int factorial(long long int number)
{
    long long int result ;
    while(number)
    {
        if (number<0)
        {
            printf("\nOnly Positive Numbers are allowed\n");
            exit(1);
        } 
        return result=number*factorial(number-1);      
    } 
    return 1;
}