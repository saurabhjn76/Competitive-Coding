#include<stdio.h>

int main()
{
    int i,j,k,l=0,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]<=0)
                l++;
        }
        if(l>=k)
            printf("NO\n");
        else
            printf("YES\n");
        l=0;
    }
    return 0;
}