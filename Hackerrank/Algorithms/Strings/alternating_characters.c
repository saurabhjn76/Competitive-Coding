#include<stdio.h>
#include<string.h>


int main()
{

    int t,i,j,k,l,count=0,d,e,n;
    char a[100000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        l=strlen(a);
        for(j=0;j<l-1;j++)
        {
            if(a[j]==a[j+1])
            {
                count++;
            }
        }
        printf("%d\n",count);
        count=0;

    }
    return 0;
}
