
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    long long int p,q,i,k,j=0,sum=0,l,d=0;
    int flag=0;
    int a[1000];
    scanf("%lld %lld",&p,&q);
    for(i=p;i<=q;i++)
    {

        k=i;
          while(k>0)
        {

            k=k/10;
            d++;
        }


        k=pow(i,2);
        j=0;
        while(k>0)
        {
            a[j]=k%10;
            k=k/10;
            fflush(stdin);
          //  printf("%d ",a[j]);
            j++;
        }
        while(j<=2*d)
        {
            a[j]=0;
            j++;
        }
        for(l=0;l<d;l++)
        {
            sum+=pow(10,l)*a[l];


        }

        for(;l<j;l++)
             sum+=pow(10,l-d)*a[l];
//  printf("%ld ",sum);
        if(sum==i)
        {
            flag=1;
            printf("%lld ",i);
        }
        sum=0;
     d=0;
     l=0;
     j=0;

    }
    if(flag==0)
    {
        printf("INVALID RANGE");
    }
    return 0;
}
