#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int total(int n)
{
    if(n==1 || n==0)
        return 1;

    else
        return total(n/2)+1;
}

int main()
{
    int n,i,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    int x=total(n);
    printf("Total bits of a given number is %d \n",x);
     for(;i<(sizeof(int)*8);i++)
    {
        if(1&n)
            c++;
        n>>=1;
    }
     printf("Ones bits of a given number is %d \n",c);
    printf("Zeros bits of a given number is %d ",x-c);
}
