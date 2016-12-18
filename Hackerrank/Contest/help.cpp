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
bool prime[1000000+1];
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
   
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    /*for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";*/
}
int main()
{
  int t=readInt();
  SieveOfEratosthenes(1000);
 prime[0]=false;
 prime[1]=false;
  	//printf("hefnjf\n");
  while(t--){
  	int n;
  	cin >> n;
  	int a[4*100001];
  	ll count=0,j=0;
  	for(ll xyz=(ll)pow(10,n-1)+1;xyz<(ll)pow(10,n);xyz++){
  		//printf("%lld\n",xyz );
  		j=0;
  		ll kk=xyz;
  		while(kk>0){
  			a[j]=kk%10;
  			j++;
  			kk/=10;
  		}
  		/*for(int i=0;i<j;i++){
  			printf("%d ",a[i] );
  		}
  		printf("\n");*/
  		bool f1=false,f2=false,f3=false;
  		for(int i=0;i<j-2;i++)
  		{
  			if(!prime[a[i]+a[i+1]+a[i+2]])
  				break;
  			else if(i==j-3)
  				f1=true;
  		}
  		for(int i=0;i<j-3;i++)
  		{
  			if(!prime[a[i]+a[i+1]+a[i+2]+a[i+3]])
  				break;
  			else if(i==j-4)
  				f2=true;
  		}
  		for(int i=0;i<j-4;i++)
  		{
  			if(!prime[a[i]+a[i+1]+a[i+2]+a[i+3]+a[i+4]])
  				break;
  			else if(i==j-5)
  				f3=true;
  		}
  		if(f1 && f2 && f3)
  		{
  			count++;
  			printf("%lld---> %lld\n",xyz,count );

  		}
  	}

  }
	
	return 0;
}
	