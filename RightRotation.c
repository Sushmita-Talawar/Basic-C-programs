#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,k=0,q=0,i,j,cc=0;
    int arr[10000],brr[10000],crr[10000],max=0,sma=0,temp=0;
    printf("Enter the size of the array : ");
    scanf("%d %d %d",&N,&k,&q);
    printf("Enter array elements ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<q;i++)
    {
        scanf("%d",&brr[i]);
    }
    for(i=0;i<k;i++)
    {
        int last=arr[N-1];
        for(j=N-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=last;
    }

    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<q;i++)
    {
        printf("%d\n",arr[brr[i]]);
    }

}
