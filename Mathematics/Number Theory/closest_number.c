#include<stdio.h>
#include<math.h>

int main()
{
long long int a,b,x,p,i,j,k,t;
scanf("%lld",&t);
for(i=0;i<t;i++)
{
    scanf("%lld %lld %lld",&a,&b,&x);
    p=pow(a,b);
    k=p%x;
    if(k>x/2)
    {
        printf("%lld\n",(p/x)*x+x);
    }
    else
    {
        printf("%lld\n",(p/x)*x);
    }
}
return 0;

}
