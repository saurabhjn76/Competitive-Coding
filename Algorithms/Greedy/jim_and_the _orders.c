#include<stdio.h>
#include<stdlib.h>


int main()
{
   typedef struct orders
    {
        long int a;
        long int b;
        long int sum;
        long int ind;
    }orders;
    orders temp;
    long int n,i,j,k;
    scanf("%ld",&n);
    orders t[n];
   // t=(orders*)calloc(n,sizeof(orders));
    for(i=0;i<n;i++)
    {
        scanf("%ld %ld",&t[i].a,&t[i].b);
        t[i].sum=t[i].a+t[i].b;
        t[i].ind=i+1;

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(t[j].sum>t[j+1].sum)
            {
                temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
             if(t[j].sum==t[j+1].sum)
             {
                 if(t[j+1].a>t[j].a)
                 {
                      temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;

                 }
             }

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%ld ",t[i].ind);
    }

return 0;
}
