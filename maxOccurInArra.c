#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,t=0,max=0;
    int arr[50];
     scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        t=0;
        for(j=0;j<n;j++)
        {
         if(arr[i]==arr[j])
         {
             t++;
         }
         if(max<t)
         {
             max=t;
         }
        }
    }
    printf("%d",max);
    return 0;
}
