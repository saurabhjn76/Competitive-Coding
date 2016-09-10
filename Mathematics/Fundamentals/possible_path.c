#include<stdio.h>
#include<math.h>
long long int gcd(long long int a,long long int b)
{
    long long int max,min,rem;

 if(a>=b)

 {   max=a;
     min=b;

  }
 else
 {
   max=b;
   min=a;

  }
 while(min!=0)
    {

      rem=max%min;
      max=min;
      min=rem;

     }
 return max;
}
int main()
{
    long long int i,j,k,n,t,x,y,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&x,&y,&a,&b);
       
        if(gcd(a,b)==gcd(x,y))
            printf("YES\n");
                else
                printf("NO\n");

    }
    return 0;
}
