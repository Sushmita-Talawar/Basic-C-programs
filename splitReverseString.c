#include<stdio.h>
#include<conio.h>
void main()
{
    char Str[100], RevStr[100];
  	int i, j, len;

  	printf("Please Enter any String :  ");
  	gets(Str);

  	j = 0;
  	len = strlen(Str);

  	if(len%2==0)
    {
        for (i = (len/2)-1; i >=0; i--)
        {
  		//RevStr[j++] = Str[i];
  		printf("%c", Str[i]);
        }
        //RevStr[i] = '\0';
        for (i = len-1; i >=(len/2); i--)
        {
  		//RevStr[j++] = Str[i];
  		printf("%c", Str[i]);
        }
    }
    else
    {
        for (i = (len/2)-1; i >=0; i--)
        {
  		//RevStr[j++] = Str[i];
  		printf("%c", Str[i]);
        }
        //RevStr[i] = '\0';
        int nn=len/2;
        printf("%c", Str[nn]);
        for (i = len-1; i >(len/2); i--)
        {
  		//RevStr[j++] = Str[i];
  		printf("%c", Str[i]);
        }
    }


}
