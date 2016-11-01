#include<stdio.h>

int main() 
{
    int j,n,s=1,i,t;
 
  scanf("%d",&t);
 for(i=0;i<t;i++)
  {
     scanf("%d",&n);
     //(n==0)
        //rintf("1\n");
       
   
       for(j=1;j<=n;j++){
  
   if(j%2==1)
       s=2*s;
       if(j%2==0)
             s=s+1;
                       
   } printf("%d\n",s);
     s=1;
     
 }
    return 0;
}