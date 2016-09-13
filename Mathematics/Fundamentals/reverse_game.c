#include<stdio.h>

int main()
{
    long int t,i,k,n,x,l,j;
    scanf("%ld",&t);
    //long int l,j,k,x;
    for(i=0;i<t;i++)
    {
    scanf("%ld %ld",&n,&l);
    long int a[n],b[n],temp;
    for(j=0;j<n;j++)
    { b[j]=j;
    }
    k=n-1;
    x=0;

    for(j=0;j<n;j++)
    {
        if(j%2==0)
        {
            a[j]=b[k];
            k--;
        }
        else
        {
            a[j]=b[x];
            x++;
        }
      //  printf("%d ",a[j]);
    }
    for(j=0;j<n;j++)
    {
        if(l==a[j])
        {
            printf("%ld\n",j);
            break;
        }
    }


    }
    return 0;
}
