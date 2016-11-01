#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
     int t,i,j,k,l1,l2,flag=0;
     char a[1000000],b[1000000];
     bool c[26],d[26];
     scanf("%d",&t);
     for(i=0;i<t;i++)
     {
          for(j=0;j<25;j++)
         {
             c[j]=false;
             d[j]=false;
         }
         scanf("%s",a);
         scanf("%s",b);
         l1=strlen(a);l2=strlen(b);
         for(j=0;j<l1;j++)
         {
             c[a[j]-97]=true;

         }
         for(j=0;j<l2;j++)
         {
             d[b[j]-97]=true;

         }
         for(j=0;j<25;j++)
         {
             if(c[j]==true && d[j]==true)
             {
                 printf("YES\n");
                 flag=1;
                 break;

             }
         }
         if(flag==0)
            printf("NO\n");
         flag=0;
        
     }
     return 0;
}
