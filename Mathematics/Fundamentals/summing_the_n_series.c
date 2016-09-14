#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,t;
    long long int  n,sum=0;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        n=n%(int)(pow(10,9)+7);
       sum=n*n%(int)(pow(10,9)+7);
        printf("%lld\n",sum);
        sum=0;
    }
    return 0;
}
