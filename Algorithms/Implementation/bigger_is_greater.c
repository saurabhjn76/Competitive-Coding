#include<stdio.h>
#include<string.h>

int main()
{
    long int t,i,l,j,k;
    int f,m;
    char ch;
    int flag=0;
    scanf("%ld",&t);
    char a[1000];
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
       // puts(a);
        l=strlen(a);

        for(j=l-1;j>0;j--)
        {
              if(a[j]>a[j-1])
            {
               ch= a[j-1];
               for(m=l-1;m>j-1;m--)
               {
                   if(ch<a[m])
                   {

               a[j-1]=a[m];
               a[m]=ch;
               break;
               }
               }

               for(f=j;f<l;f++)

               {
                  // printf("%d ",f);

                   for(k=j;k<l-f+j-1;k++)
               {
                   if(a[k]>a[k+1])
                   {
                        ch= a[k+1];
                        a[k+1]=a[k];
                          a[k]=ch;

                   }
               }
               }
               puts(a);
              // printf("\n");
               flag=1;
               break;


            }
        }
        if(flag==0)
            printf("no answer\n");
          flag=0;
    }
return 0;
}
