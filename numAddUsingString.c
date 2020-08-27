#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s1[10000],s2[10000];
    scanf("%s",&s1);
    scanf("%s",&s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    char sum[1000];

    int i,j;
    for(i=len1-1;i>=0;i--)
    {
        for(j=len2-1;j==i;j--)
        {
            sum[i]=sum[i]+s1[i]+s2[j];
        }
    }
    for(i=0;i<len1;i++)
    {
         printf("%s",sum[i]);
    }

    return 0;
}

