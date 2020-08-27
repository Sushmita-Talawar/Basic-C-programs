#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    if(n>1)
        return n*fact(n-1);


}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial of a given number is %d ",fact(n));
}
