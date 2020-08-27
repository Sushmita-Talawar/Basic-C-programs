#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int binaryTotal(int b)
{
    int count = 0;
    while(b)
    {
        b=b/10;
        count++;
    }
    return count;
}
long otob(int n)
{
    int d=0,i=0;
    long b=0;
    while(n!=0)
    {
        d=d+(n%10)*pow(8,i);
        i++;
        n=n/10;
    }

    i=1;

    while(d!=0)
    {
        b=b+(d%2)*i;
        d=d/2;
        i=i*10;
    }
    return b;
}
int main() {

int n,ones=0,zero=0,i;
long bin=0;
scanf("%d",&n);
bin=otob(n);
printf("%ld\n",bin);
printf("%ld\n",binaryTotal(bin));
while(bin)
{
    if(bin&1)
    {
       ones++;
    }
    else
    {
     zero++;
    }
    bin=bin/10;
}

//printf("total %d\n",ones+zero);
printf("ones %d\n",ones);
printf("zeros %d\n",zero);
return 0;
}


