#include<stdio.h>
#include<math.h>

int main()
{
    long int i,j,k,n,t,count=0,pro=1;
    scanf("%ld",&t);
    while(t--)
    {  count=0;
        scanf("%ld",&n);
        if(n%2!=0)
        {
            printf("0\n");
            continue;
        }
        else
        {
            while(n%2==0)
            {
                n=n/2;
                count++;
            }
            pro=count;
          // printf("%ld  ",pro);
           count=0;
            for(i=3;i<=sqrt(n);i++)
            {
                while(n%i==0)
                {
                    n=n/i;
                    count++;
                  // printf("%ld ",i);
                }
                pro*=(count+1);
                count=0;
            }

            if(n>2)
            {
                pro*=2;
            }
  printf("%ld\n",pro);
  pro=0;
        }
    }
    return 0;
}
