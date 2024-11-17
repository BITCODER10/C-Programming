#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int size_cal()
{
    printf("\n Size of float : %lu",sizeof(float));
    printf("\n Size of int : %lu",sizeof(int));
    printf("\n Size of long long int : %lu",sizeof(long long int));
    printf("\n Size of double : %lu",sizeof(double));
    return 0;

}
int validation(int checkpoint)
{
    if (checkpoint<0)
    {
        printf("Error: Entered number is negative (%d). Exiting program.\n", checkpoint);
        exit(EXIT_FAILURE);
    }else{
        printf("Processed...");
        return 0;
    }  
}
int print_address(float *p, float *r, int *n)
{
    printf("\n principle is located at %p",p);
    printf("\n rate is located at %p",r);
    printf("\n year is located at %p",n);
    return 0;
}
float interest_cal(float p, int r, int n)
{
    float interest= (p*r*n)/100;
    return interest;
}
float Simple_Interest_cal(float principle, float rate, int year)
{
    printf("\n Plese enter the principle amount : ");
    scanf("%f",&principle);
    validation(principle);
    printf("\n Plese enter the rate: ");
    scanf("%f",&rate);
    validation(rate);
    printf("\n Plese enter the years: ");
    scanf("%d",&year);
    validation(year);
    print_address(&principle,&rate,&year);
    float interest=interest_cal(principle, rate, year);
    return interest;
}

float Compound_Interest_cal(float principle, float rate, int year)
{
    printf("\n Plese enter the monthly amount : ");
    scanf("%f",&principle);
    validation(principle);
    printf("\n Plese enter the rate: ");
    scanf("%f",&rate);
    validation(rate);
    printf("\n Plese enter the years: ");
    scanf("%d",&year);
    validation(year);
    int period;
    float amount, a,r,c,d;
    double b;
    period=year *12;
    r=rate/1200;
    c=1+r;
    d=pow(c,period);
    amount = principle *c*((d-1)/r);
    printf("\nTotal Invested Amount %0.2f",(period*principle));
    return amount;

}



int main()
{
    int  year,sc_i;
    float interest, rate, principle;
    printf("\n1] \tSimple Interest");
    printf("\n2] \tCompond Interest");
    printf("\n3] \tSize Calculator");
    printf("\nWhat do you want to calculate : ");

    scanf("%d",&sc_i);

    switch (sc_i)
    {
    case 1:
        interest= Simple_Interest_cal(principle,rate,year);
        principle += interest;
        printf("\nThe principle you are going to get is : Rs. %0.2f  ",principle);
        break;
    case 2:
        principle=Compound_Interest_cal(principle,rate,year);
        printf("\n The Amount you are going to get is : Rs. %0.2f  ",principle);
        break;
    case 3:
        size_cal();
        break;
    
    default:
        printf("\n invalid Input\n");
        break;
    }
    return 0;
}


