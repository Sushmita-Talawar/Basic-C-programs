#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char ch;
    printf("Enter input : \n");
    scanf("%c",&ch);

    if(isxdigit(ch))
    {
        printf("Entered digit is hexadecimal\n");
    }
    else
    {
        printf("Entered digit is not hexadecimal\n");
    }
    return 0;
}


/*
int main()
{
    int i=0,c=0;
    char s[100]="Ayyapa@135pap";
    for(i=0;i<strlen(s);i++)
    {
        if(isxdigit(s[i]))
        {
            c++;
        }
    }
    printf("Number of hexadecimal digit is %d: ",c);
    return 0;
}*/
