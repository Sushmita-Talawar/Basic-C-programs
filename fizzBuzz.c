#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("FizzBuzz\n");
        }
        else
        {
            if(i%3==0)
        {
            printf("Fizz\n");
        }
        else if(i%5==0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n",i);
        }
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

