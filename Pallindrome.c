#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter a strings\n");
    scanf("%s",&a);
    char *b=strrev(a);
    if(a==b)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

}
