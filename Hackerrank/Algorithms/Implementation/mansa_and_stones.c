#include<stdio.h>
#include<math.h>
#include<malloc.h>

int main()
{
    int t,a,b,n,i,j,k,x,y;
 scanf("%d",&t);

    for(y=0;y<t;y++)
    {
        scanf("%d %d %d",&n,&a,&b);
        n=n-1;
        if(a<b)
        {
            x=a;
            a=b;
            b=x;
        }
        if(a==b)
        {
            x=(n)*b;
            printf("%d ",x);
        }
        else{
        for(i=0;i<=n;i++)
        {
            x=i*a+(n-i)*b;
            printf("%d ",x);
        }
        }
        printf("\n");
    }
    return 0;
}