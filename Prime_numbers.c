// prime numbers between n and m
// 1 to 10 output : 2,3,5,7

#include<stdio.h>
int main(void)
{
    int n,i,j,m;
    scanf("%d%d",&n,&m);

    for(i=n;i<=m;i++)
    {
        int flag=0;
        if (i == 1 || i == 0)
            continue;
        for(j=2;j<=(i/2);j++)
            {
                if(i%j==0)
                    {
                        flag=1;
                        break;
                    }
            }
            if(flag==0)
            {
                printf("%d , ",i);
            }
    }
}

/*
//nth prime number
//n=2 output:3

#include<stdio.h>
int main(void)
{
    int n,i,j,c=0;
    scanf("%d",&n);

    for(i=2;i>0;i++)
    {
        int flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            c++;
        }
        if(c==n)
        {
            printf("%d",i);
            break;
        }
    }


}
*/
