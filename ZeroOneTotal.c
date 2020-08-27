#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define INT_SIZE sizeof(int) * 8 /* Total number of bits in integer */

/* Function to get no of set bits in binary
   representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {

    int N,i,j,x=0,y=0,xx[100000],yy[100000],arr[100],brr[100],index=0,c=0,val=0;
   long num, decimal_num, remainder=0, base = 1, binary = 0, no_of_1s = 0;
   int zeros = 0,ones = 0,kk;
   int aa[100];
   int pl=0;
   // printf("Enter a number of test cases :");
    scanf("%d",&N);
   //  printf("Enter x and y\n");
    for(i=0;i<N;i++)
    {
        scanf("%d %d",&x,&y);
            xx[i]=x;
            yy[i]=y;
    }

    for(i=0;i<N;i++)
    {
        if(xx[i]>yy[i])
        {   if(yy[i]==0)
            {printf("NO\n");}
            else if(yy[i]==1)
            {
                int sak=xx[i];
                int oo=0;
                oo=countSetBits(sak);
                if(oo>1)
                {
                    printf("NO\n");
                }
                else
                {
                    printf("YES\n");
                }
            }
            pl=xx[i]-yy[i];

            else if(pl==1)
            {
                printf("YES\n");
            }

            else
           {
               int sak1=xx[i];
               int try=0;
                try=countSetBits(sak1);
                if(try>1)
                {
                    printf("NO\n");
                }
                else
                {
                    printf("YES\n");
                }

           }

        }
        else if(xx[i]==yy[i])
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

