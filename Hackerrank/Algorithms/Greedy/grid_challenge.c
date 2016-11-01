#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int t,n,i,j,k,l,flag=0;
    char temp;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n==1)
        {
            scanf(" %c",&temp);
            printf("YES\n");
            continue;
        }
        char a[n][n];
        for(j=0;j<n;j++)
        {
            fflush(stdin);
scanf("%s",a[j]);
        }
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                for(l=0;l<n-k-1;l++)
                {
                    if(a[j][l]>a[j][l+1])
                    {
                        temp=a[j][l];
                        a[j][l]=a[j][l+1];
                        a[j][l+1]=temp;
                    }
                }
            }
        }
       /*  for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                printf("%c",a[j][k]);
            }printf("\n");
        }*/
        for(j=0;j<n;j++)
        {
            for(k=0;k<n-1;k++)
            {
                if(a[k][j]>a[k+1][j])
                {
                    printf("NO\n");
                    flag=1;
                    j=n;
                    break;
                }
            }

        }
        if(flag==0)
        {
            printf("YES\n");
        }
        flag=0;
    }
}
