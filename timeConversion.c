#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,t=0,max=0;
    char arr[500],s[]="AM";
     scanf("%[^\n]%*c",&arr);
    //printf("%s",arr);
    if(strstr(arr,s)==NULL)
    {
        if(arr[0]=='1' && arr[1]=='2')
        {
            for(i=0;i<strlen(arr)-2;i++)
            {
                printf("%c",arr[i]);
            }
        }

         else
         {
            arr[0]=arr[0]+1;
            printf("%c",arr[0]);
            arr[1]=arr[1]+2;
            printf("%c",arr[1]);
            for(i=2;i<strlen(arr)-2;i++)
            {
                printf("%c",arr[i]);
            }
        }
    }
    else
    {
        if(arr[0]=='1' && arr[1]=='2')
        {
           printf("00");
            for(i=2;i<strlen(arr)-2;i++)
            {
                printf("%c",arr[i]);
            }
        }
        else
        {
           for(i=0;i<strlen(arr)-2;i++)
            {
             printf("%c",arr[i]);
             }
        }

    }

     return 0;
}
