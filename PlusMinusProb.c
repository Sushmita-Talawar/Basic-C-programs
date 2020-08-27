#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,sum1=0,sum2=0,diff=0;
    int arr[50];
    float pt=0,nt=0,z=0;
    printf("Enter size :");
    scanf("%d",&n);
    printf("Enter elements :\n");
     for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            pt++;
        }
        else if(arr[i]<0)
        {
            nt++;
        }
        else
        {
            z++;
        }
    }
    printf("%f\n",pt/n);
    printf("%f\n",nt/n);
    printf("%f\n",z/n);
    return 0;
}
