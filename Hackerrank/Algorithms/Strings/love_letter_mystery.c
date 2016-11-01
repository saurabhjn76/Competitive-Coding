#include<stdio.h>
#include<string.h>


int main()
{

    int t,i,j,k,l,diff=0,d,e,n;
    char a[10000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        l=strlen(a);
         for(j=0;j<l/2;j++)
                {   k=(int)a[j];
                    n=(int)a[l-j-1];

                    if(k-n>0)
                    {
                         diff+=k-n;


                    }
                    else
                    {
                        diff+=n-k;


                    }
                }


    printf("%d\n",diff);
    diff=0;
     }
    return 0;
 }
