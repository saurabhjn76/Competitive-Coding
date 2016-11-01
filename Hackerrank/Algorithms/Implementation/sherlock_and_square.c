#include<stdio.h>
#include<math.h>

int main()
{
    int t,a,b,i,j,k,count=0;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

        scanf("%d %d",&a,&b);
        k=sqrt(a);
        if(k*k==a)
            count++;
        for(;k*k<=b;k++)
        {
            count++;
        }
        printf("%d\n",count-1);
        count=0;
    }
}