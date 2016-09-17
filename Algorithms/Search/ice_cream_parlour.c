#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,i,j,k,f,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        int a[n];
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
            for(k=0;k<n-1;k++)
            {
                for(j=k+1;j<n;j++)
                {
                    if(m==a[k] + a[j])
                    {
                        printf("%d %d\n",k+1,j+1);

                            break;
                    }
                }
            }



    }
    return 0;
}
