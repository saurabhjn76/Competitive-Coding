#include<stdio.h>
#include<math.h>
int main()
{
    long int i,j,k,n,l,t,kk;
    scanf("%ld %ld",&n,&k);
    t=n;
    long int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
         kk=a[i];
        while(kk>t)
        {
            kk=a[n-kk];
        }
        if(k>0)
        {  if(kk<t)
        {

           printf("%ld ",t);
           t--;
           k--;

        }
     else    if(kk==t)
        {
            printf("%ld ",t);
           t--;

        }

        }
        else
        printf("%ld ",kk);
    }
    return 0;
}

