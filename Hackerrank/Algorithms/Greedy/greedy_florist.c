
#include<stdio.h>
#include<string.h>


int main()
{

    int t,i,j,k,l,count=0,d,sum=0,n,c=0;
    int a[100];
    scanf("%d",&n);

    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     if(k==n)
{
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
}
if(k<n)
{


    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                d=a[j];
                a[j]=a[j+1];
                a[j+1]=d;
            }
        }
    }
    /*for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
*/


    c=n/k;
    t=n%k;
    for(i=0;i<c;i++)
  {
    for(j=n-i*k-1;j>(n-k)-i*k-1;j--)
    {

        sum+=(i+1)*a[j];
    }
  }
    for(j=0;j<t;j++)
    {

        sum+=(i+1)*a[j];
    }

}
printf("%d\n",sum);
sum=0;
return 0;
}
