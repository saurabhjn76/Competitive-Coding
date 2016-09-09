#include<stdio.h>

int main()
{
   int t,n,c,m,i,j,count=0,rem=0,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&c,&m);
        count=n/c;
        j=n/c;
        while(j>0)
        {
            d=j;
          j=(j+rem)/m;
          //printf("%d\n",j);
          rem=(d+rem)%m;


        count+=j;
        }
         printf("%d\n",count);
        count=0;
        d=0;
        rem=0;
    }
    return 0;

}
