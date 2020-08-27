#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define INT_SIZE sizeof(int)*8
int total(int n)
{
    int c=0;
    while(n)
    {
        n=n/10;
        c++;
    }
    return c;
}
int main() {

int n,ones=0,zero=0,i;
scanf("%d",&n);
printf("Binary : %d\n",n);
printf("total %d\n",total(n));
while(n)
{
    if(n&1)
    {
        ones++;
    }

    else
    {
        zero++;
    }

    n=n/10;
}
printf("ones %d\n",ones);
printf("zeros %d\n",zero);
return 0;
}

