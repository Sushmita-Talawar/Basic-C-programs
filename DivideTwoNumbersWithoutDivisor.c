#include<stdio.h>


void divide(int divident,int divisor)
{
    int sign=1,quotient=0;
    if((divident*divisor)<0)
    {
        sign=-1;
    }

    divident=abs(divident);
    divisor=abs(divisor);
    while(divident>=divisor)
    {
        divident=divident-divisor;
        quotient++;
    }
    quotient=quotient*sign;
    printf("%d",quotient);

}

int main(void)
{
    int divident,divisor;
    scanf("%d%d",&divident,&divisor);
    divide(divident,divisor);

}
