#include<stdio.h>

int main()
{
    int n,i,j,k,l,count=0;
    char a[30];
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        gets(a);
    }
    for(i=0;i<100;i++)
    {
        for(j=0;j<n;j++)
        {
        if(b[j]<=i)
            count++;
       }
       printf("%d ",count);
       count=0;
    }
    return 0;
}
