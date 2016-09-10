#include<stdio.h>

int main()
{
    int i,j,k,n,m,l,d,max=0,maxf=0,count=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%1d",&a[i][j]);
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                max+=a[i][k] || a[j][k];
            }
            if(max>maxf)
            {
                maxf=max;
            }
            max=0;

        }
    }
     for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                max+=a[i][k] || a[j][k];
            }
            if(max==maxf)
            {
                count++;
            }
            max=0;

        }
    }
    printf("%d\n%d",maxf,count);
    return 0;
}