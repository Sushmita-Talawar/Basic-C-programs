#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,max=0,arr[10000];
    scanf("%d",&n);
     printf("%d",n);
    printf("Enter ele\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    //printf("%d",arr[0]);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
        }
    }
    printf("%d",max);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

