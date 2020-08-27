#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int ones(int n)
{
    int c=0;
    while(n)
    {
        c += n&1;
        n>>=1;
    }
    return c;
}
int total(int n)
{
    return (int)log2(n)+1;
}

int bin(int n)
{
    int rem,b=0,t=1;
    while(n)
    {
        rem=n%2;
        n=n/2;
        b=b+rem*t;
        t=t*10;
    }
    return b;
}

int main() {

int n;
scanf("%d",&n);
printf("Binary : %d\n",bin(n));
printf("total %d\n",total(n));
printf("ones %d\n",ones(n));
printf("zeros %d\n",total(n)-ones(n));
return 0;
}
