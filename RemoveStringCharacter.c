#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s1[100],s2[100],s3[100];
    int i,j,c=0;
    scanf("%s",&s1);
    scanf("%s",&s2);

    int len1=strlen(s1);
    int len2=strlen(s2);

    for(i=0;i<len1;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(s1[i]!=s2[j])
            {
                c++;
            }

        }printf("%d",c);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

