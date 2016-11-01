#include<stdio.h>
#include<malloc.h>
#include<string.h>

void rep(char*,int );

int main()
{
    int n,i,j=1,k,b[100],count=0,l,counter=0;
    char a[100][100];
     scanf("%d",&n);
    for(i=0;i<n;i++)
    {

       scanf("%s",a[i]);
        b[i]=strlen(a[i]);
         rep(a[i],b[i]);
    }
    for(i=0;i<b[0];i++)
    {
        for(j=1;j<n;j++)
        {
            for(k=0;k<b[j];k++)
            {
                if(a[0][i]!=1 && a[0][i]==a[j][k])
                {
                    count++;
                    break;
                }
            }
        }
        if(count==n-1)
        {
            counter++;

        }
        count=0;

    }
    printf("%d\n",counter);


return 0;
}
void rep(char *c,int l)
{
    int i,j,k;
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(c[i]==c[j] && c[i]!=1)
            {
                c[j]=1;
            }
        }

    }

}