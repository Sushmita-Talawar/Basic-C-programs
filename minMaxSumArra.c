#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,t=0;
    int arr[50];
    for(i=0;i<5;i++)
    {
         scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    int sum1=0,sum2=0;
    for(i=0;i<4;i++)
    {
        sum1=sum1+arr[i];
    }
    for(i=1;i<5;i++)
    {
        sum2=sum2+arr[i];
    }
    printf("%d %d",sum1,sum2);
    return 0;
}
