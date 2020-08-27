#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int decimal(int n)
{
    int rem,bin=0,temp=1;
    while(n>0)
    {
        rem=n%2;
    n=n/2;
    bin=bin+rem*temp;
    temp=temp*10;
    }

    return bin;
}
int main() {

int n;
scanf("%d",&n);

printf("total %d",decimal(n));

return 0;
}
