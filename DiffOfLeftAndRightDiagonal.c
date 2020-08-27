#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,sum1=0,sum2=0,diff=0,arr[50][50];
    printf("Enter size :");
    scanf("%d",&n);
    printf("Enter elements :\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1=sum1+arr[i][j];
            }
            if((i+j)==(n-1))
            {
                sum2=sum2+arr[i][j];
            }
        }
    }
    diff=sum1-sum2;
    if(diff<0)
    {
        diff=-diff;
    }
    printf("%d\n",diff);
    return 0;
}
