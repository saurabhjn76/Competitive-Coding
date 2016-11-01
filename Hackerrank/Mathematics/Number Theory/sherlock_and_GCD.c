#include<stdio.h>
#include<math.h>
long int gcd(long int a,long int b)
{
   long  int rem,max,min;

 //printf("Enter the TWo no. for HCF calculation \n");
 // scanf("%d%d",&a,&b);
 if(a>=b)

 {   max=a;
     min=b;

  }
 else
 {
   max=b;
   min=a;

  }
 while(min!=0)
    {

      rem=max%min;
      max=min;
      min=rem;

     }
 // printf("The hcf of given number %d & %d is :%d\n",a,b,max);
 return max;
 }

int main()
{
  long   int t,i,j,k,n,count=0,flag=0,ss=0;;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        long int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%ld",&a[j]);
        }
        ss=gcd(a[0],a[1]);
      //printf("%ld \n",ss);
        for(j=0;j<n-1;j++)
        {
            if(ss==1)
            {
                flag=1;
                break;
            }
            ss=gcd(ss,a[j]);
              
        }
        if(flag==1)
            printf("YES\n");
        else
          printf("NO\n");
        flag=0;
        ss=1;
    }
    return 0;
}
