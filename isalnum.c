#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a=0;

    printf("Enter input\n");
    scanf("%c",&a);
    if(isalnum(a))
    {
        printf("Alpha numeric\n");
    }
    else
    {
        printf("Is not alpha numeric\n");
    }
}
