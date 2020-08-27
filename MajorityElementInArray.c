#include<stdio.h>

void findMejority(int arr[],int n)
{
    int maxCount=0,i,j;
    int index= 0;
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>maxCount)
        {
            maxCount=count;
            index=i;
        }
    }

    if(maxCount> (n/2))
        {
            printf("%d",arr[index]);
        }
    else
        {
            printf("No");
        }
}

int main()
{
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMejority(arr,n);
    return 0;
}





