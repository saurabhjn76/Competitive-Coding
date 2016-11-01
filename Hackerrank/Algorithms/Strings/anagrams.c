#include<stdio.h>
#include<string.h>

int main()
{
    int t,count=0, i,j,k,l;
    char a[10000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
      scanf("%s",a);
        l=strlen(a);
        if(l%2==1)
        {
            printf("-1\n");
        }
        else
        {
            for(j=0;j<l/2;j++)
            {

                for(k=l/2;k<=l;k++)
                {


                if(a[j]==a[k])
                {
                    a[k]=1;
                    count++;


                    break;
                }

            }
            // if(k==l+1)
               // count++;
            }
            

            printf("%d\n",l/2-count);
            count=0;
        }
    }
    return 0;
}