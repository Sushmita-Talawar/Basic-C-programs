#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,i,j;
    scanf("%d", &n);
  	for(i=1;i<=n;i++)
    {
        for(j=i;j<=i;j++)
        {
            printf(" ");
        }
            for(j=i;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
