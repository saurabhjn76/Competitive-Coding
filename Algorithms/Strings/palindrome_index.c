#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t,i,j,k,l,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {


    char a[100005];
    fflush(stdin);
    scanf("%s",a);
    l=strlen(a);
    for(j=0;j<l/2+1;j++)
    {
        if(a[j]==a[l-1-j])
        {
            count++;
           // printf("%d",count);
        }
        else
        {
            if(a[j]==a[l-1-j-1] && a[j+1]!=a[l-1-j])
            {

            printf("%d\n",l-1-j);
            break;
            }
            if(a[j+1]==a[l-1-j] && a[j]!=a[l-1-j-1])
            {
                printf("%d\n",j);
                break;
            }
            if(a[j+1]==a[l-1-j] && a[j]==a[l-1-j-1])
            {
                if(a[j+2]==a[j])
                {
                    printf("%d\n",j);
                break;
                }
                else
                {
                    printf("%d\n",l-1-j);
                    break;
                }
            }
        }
        if(count==l/2+1)
        {
            printf("-1\n");
        }
    }
count=0;
}
return 0;
}