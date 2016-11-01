#include<stdio.h>

int main()
{
     long int n,n1,t;
     int a[100];
   int i,j=0,count=0,k;

   scanf("%ld",&t);
   for(i=0;i<t;i++)
   {

       scanf("%ld",&n);
       for(n1=n;n1>0;n1=n1/10)
       {   a[j]=n1%10;
              j++;

       }
       for(k=0;k<j;k++)
       {   if(a[k]!=0)
       {


           if(n%a[k]==0)
            count++;
       }
       }
       printf("%d\n",count);
       count=0;
       j=0;


   }

   return 0;
}