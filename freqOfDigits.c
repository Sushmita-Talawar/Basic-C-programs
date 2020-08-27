#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

char s[1000];
int cnt=0,i,j;

scanf("%s",&s);

for(i=0;i<10;i++)
{
    for(j=0;s[j]!='\0';j++)
    {
        if((s[j]-48)==i)
        {
            cnt++;
        }
    }
    printf("%d ",cnt);
    cnt=0;
}
return 0;
}
