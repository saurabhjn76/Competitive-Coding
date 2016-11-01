#include<stdio.h>
#include<math.h>

int main()
{
    int a[100000],i,j,k,n,t,m,min;
    scanf("%d %d",&n,&t);
    for(j=0;j<n;j++)
       {

       scanf("%d",&a[j]);
      // printf("%d",a[i]);
       }
    for(m=0;m<t;m++)
    {
        scanf("%d %d",&i,&j);
        min=a[i];
    for(;i<=j;i++)
    {
       // printf("%d",min);
        if(min>a[i])
            min=a[i];


    }
    printf("%d\n",min);

    }
    return 0;
}