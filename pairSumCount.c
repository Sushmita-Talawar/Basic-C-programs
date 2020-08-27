#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,sum=0,osum=0,i,j,arr[1000];
   int c=0;
  // printf("Enter size :");
   scanf("%d",&n);
  // printf("Enter elements :");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
  // printf("Enter sum :");
   scanf("%d",&sum);

   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if((arr[i]+arr[j])==sum)
           {
               c++;
           }
       }
   }

   printf("%d",c);
    return 0;
}

