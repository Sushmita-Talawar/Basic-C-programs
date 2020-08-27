#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i;
    printf("Enter a year: ");
    scanf("%d",&n);
    if((n%4)==0)
    {
        if((n%100)==0)
        {
            if((n%400)==0)
            {
                printf("Leap year\n");
            }
            else
            {
                printf("Not leap year\n");
            }
        }
        else
        {
            printf("Not leap year\n");
        }
    }
    else
    {
        printf("Not leap year\n");
    }

}
