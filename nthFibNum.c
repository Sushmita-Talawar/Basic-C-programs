#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fib(int n)
{
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}
int main() {

    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

