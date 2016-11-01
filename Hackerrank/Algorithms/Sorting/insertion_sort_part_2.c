#include<stdio.h>

int main()
{
    int i,j,k,l,n,t;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(l=1;l<n;l++)
    {

    t=a[l];
    for(i=0;i<l;i++)
    {

        if(t<a[i])
        {
            break;
        }
    }
     for(j=l-1;j>i-1;j--)
        {
        a[j+1]=a[j];
        }
    a[i]=t;
     for(k=0;k<n;k++)
        {
              printf("%d ",a[k]);
          }printf("\n");
    }

}
