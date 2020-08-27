#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

char s1[50],s2[50],s3[50];
int cnt=0,i,j;
int k=0;

scanf("%s",&s1);
scanf("%s",&s2);
int len1=strlen(s1);
//Removing duplicates in string 1
for(i=0;i<len1;i++)
    {
        for(j=i+1;s1[j]!='\0';j++)
        {
            if(s1[j]==s1[i])
            {
                for(k=j;s1[k]!='\0';k++)
                {
                    s1[k]=s1[k+1];
                }
            }
        }
    }

int len2=strlen(s2);
//Removing duplicates in string 2
for(i=0;i<len2;i++)
    {
        for(j=i+1;s2[j]!='\0';j++)
        {
            if(s2[j]==s2[i])
            {
                for(k=j;s2[k]!='\0';k++)
                {
                    s2[k]=s2[k+1];
                }
            }
        }
    }
 // printf("%s\n",s1);
  //printf("%s\n",s2);

int f=0;
 //code for intersection
for(i=0;i<strlen(s1);i++)
{
    for (j=0;j<strlen(s2);j++)
    {
        if(s1[i]==s2[j])
        {
            printf("%c",s1[i]);
            f++;
        }

    }
}

if(f==0)
{
    printf("null\n");
}


return 0;
}

