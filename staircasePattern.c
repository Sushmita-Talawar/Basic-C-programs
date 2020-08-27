#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    int arr[50];
    printf("Enter size :");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
