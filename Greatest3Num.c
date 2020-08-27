#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,i;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
            printf("%d",a);
    }
    else if(b>=a && b>=c)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",c);
        }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

