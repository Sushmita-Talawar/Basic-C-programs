/* C Program to Remove All Duplicate Character in a String */

#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100];
  	int i, j, k;

  	printf("\n Please Enter any String :  ");
  	scanf("%s",&str);

  	int len=strlen(str);
  	for(i=0;i<len;i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[j]==str[i])
            {
                for(k=j;str[k]!='\0';k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    printf("%s",str);
  	return 0;
}
