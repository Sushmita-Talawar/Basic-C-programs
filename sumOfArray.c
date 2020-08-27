#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
int main()
{
    int a[10];//={1,2,3,4,5,6,7,8,9};
    int sum=0,i=0,b;
    printf("Enter a size of array\n");
    scanf("%d",&b);

    for(i=0;i<b;i++)
    {
        printf("Enter a number:");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum = %d",sum);
}
*/

/*
int main()
{

    char aa="";
    int a[10];
    int sum=0,i=0;
    printf("Enter a array size\n");
    scanf("%c",&aa);

    if(isdigit(aa))
    {
        for(i=0;i<aa.length;i++)
    {
        printf("Enter a number:");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum = %d",sum);
    }
    else
    {
        printf("Not numeric\n");
    }
}
*/

/*
//Find largest element in a array
int main()
{
    char a[100];
    int max,i,j;

    printf("Enter array size\n");
    scanf("%d",&j);

    for(i=0;i<j;i++)
    {

        printf("Enter %d th element ",i);
        scanf("%d",&a[i]);


    }
    int k;
    max=a[0];
    for(k=0;k<j;k++)
    {
        if(max<a[k])
        {
            max=a[k
            ];
        }
    }
    printf("%d",max);
}
*/

/*
//linearly Search element in a array
int main()
{
    char a[5]={1,2,3,4,5};
    int i=0,key=2,flag=0;
    for(i=0;i<5;i++)
    {
        if(key==a[i])
        {
            flag=1;
        }

    }
    if(flag==1)
    {
        printf("key found : %d",a[i]);
    }
    else
        {
            printf("Key not found\n");
        }
}
*/
/*
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3;
    int index=recSearch()
}*/
int sumarr(int arr[],int n)
{
   if(n<=0)
    return 0;
   else
    return (sumarr(arr,n-1)+arr[n-1]);
}
int main()
{
    int n,i,arr[100];
    printf("Enter size: ");
    scanf("%d",&n);
     printf("Enter elements: ");
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }

    printf("sum is %d ",sumarr(arr,n));
}
