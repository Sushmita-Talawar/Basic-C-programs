#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i;
    int a=0,b=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Pingala series is : ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }

}

