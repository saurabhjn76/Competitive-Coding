#include "bits/stdc++.h"
using namespace std;
 
# define MOD 1000000007
 
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
 
long long int mini(long long int a, long long int b)
{
	return a < b? a:b;
}
 
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,j,k,l;
		scanf("%d",&n);
		long long int a[n];
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		long long int min=((a[0]*a[1])/gcd(a[0],a[1]));
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				min=mini(min,(a[i]*a[j])/gcd(a[i],a[j])); 
			}
		}
		printf("%lld\n", min);
	}	
	return 0;
}
	 