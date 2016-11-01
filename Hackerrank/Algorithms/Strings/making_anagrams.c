#include<stdio.h>
#include<string.h>

int main()
{
    int t,count=0, i,j,k,l1,l2;
    char a[10000],b[10000];
    //scanf("%d",&t);
   // for(i=0;i<t;i++)
    {
      scanf("%s",a);

        l1=strlen(a);
        scanf("%s",b);

        l2=strlen(b);
       /* if(l%2==1)
        {
            printf("-1\n");
        }
        else*/
        {
            for(j=0;j<l1;j++)
            {

                for(k=0;k<l2;k++)
                {


                if(a[j]==b[k])
                {
                    b[k]=1;
                    count++;


                    break;
                }

            }
            // if(k==l+1)
               // count++;
            }
            /*for(k=l/2+1;k<=l;k++)
                {


                if(a[k]!=1)
                {
                    count++;
                }
                }*/

            printf("%d\n",l1+l2-2*count);
            count=0;
        }
    }
    return 0;
}
