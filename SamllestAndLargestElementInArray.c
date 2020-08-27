#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,k,i;
    float arr[10000],max=0,sma=0;
    printf("Enter the size of the array : ");
    scanf("%d",&N);
    printf("Enter array elements ");
    for(i=0;i<N;i++)
    {
        scanf("%f",&arr[i]);
    }
    max=arr[0];

   for(i=0;i<N;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    sma=arr[0];

   for(i=0;i<N;i++)
    {
        if(arr[i]<sma)
        {
            sma=arr[i];
        }
    }
    printf(" Largest element is %0.2f\n",max);
    printf(" Smallest element is %0.2f\n",sma);
    return 0;
}


1 2 3 4 5
0 1 2 3 4
