#include<stdio.h>

int main()
{
     long int t,i,k,n,x,l,j,q;
    scanf("%ld %ld %ld",&n,&k,&q);
    long int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%ld",&a[(i+k)%n]);



    for(i=0;i<q;i++)
    {
        scanf("%ld",&x);
        printf("%ld\n",a[x]);
    }


    return 0;
}
