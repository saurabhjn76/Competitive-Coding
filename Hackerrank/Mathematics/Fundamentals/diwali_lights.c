#include<stdio.h>
#include<math.h>

int main()

{
    int t,n,i,j,count=0;
    int k=1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            k*=2;
            count++;
            if(count==10)
            {
                k=k%(int)pow(10,5);
                count=0;

            }
        }
        printf("%ld\n",(k-1)%(int)pow(10,5));
        k=1;

    }
    return 0;
}
