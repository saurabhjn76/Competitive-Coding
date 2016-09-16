#include<stdio.h>

int main()
{
    int i,j=0,k=0,n,t,a[1000],b[500],c[500];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[0]>a[i])
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }

    }
    for(i=0;i<j;i++)
        printf("%d ",b[i]);
    printf("%d ",a[0]);
    for(i=0;i<k;i++)
        printf("%d ",c[i]);

return 0;
}
