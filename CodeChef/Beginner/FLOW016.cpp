#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007
# define GETCHAR getchar_unlocked
typedef long long ll;

inline ll  readllInt() {
    ll  n = 0;
    char c;
    while (1){ 
      c=GETCHAR();
      if(c=='\n'||c==' ') break;
       n = n * 10 + c - '0';
    }
    return n;
}

inline int readInt() {
    int n = 0;
    char c;
    while (1){ 
      c=GETCHAR();
      if(c=='\n'||c==' ') break;
       n = n * 10 + c - '0';
    }
    return n;
}
 ll gcd( ll a, ll b)
{
     ll rem,max,min;

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
  int t=readInt();
  while(t--){
  ll a,b;
  cin >> a >> b;
  	printf("%lld %lld\n",gcd(a,b),a*b/gcd(a,b));

  
  }
	
	return 0;
}
