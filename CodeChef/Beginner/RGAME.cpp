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

/* Iterative Function to calculate (x^n)%p in O(logy) */
ll power(ll x, unsigned ll y, ll p)
{
    ll res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;  
    }
    return res;
}
int main()
{
  int t=readInt();
  // A0A1  A1A0
// A0A1A2 A2A0A1  A2A1A0  A1A0A2 --> 2^n-1(a1*a0)+ 2^n-2(a2*a0) +2^n-2(a2*a1)
// A0A1A2A3 A2A0A1A3  A2A1A0A3  A1A0A2A3 A3A0A1A2 A3A2A0A1  A3A2A1A0  A3A1A0A2  -->2*n-1(a1*a0)+ 2^n-2(a2*a1) + 2^n-3(a2*a0) +  
  //(A[k]∗2(k−1))∗(A[p]∗2(N−p))
  while(t--){
  	int n;
  	cin >> n;
  	ll a[n+1],precalc[n+1],second_half[n+1];
  	for(int i=0;i<n+1;i++){
  		cin >> a[i];
  	}
  	for(int i=0;i<n+1;i++){
  		second_half[i]=a[i]*power(2,n-i,MOD);
  	}
  	for(int i=0;i<n+1;i++)
  		precalc[i]=second_half[i];
  	for(int i=n-1;i>=0;i--){
  		precalc[i]=second_half[i]+precalc[i-1];
  	}
  	for(i=0;i<n;i++){

  	}



  }
	
	return 0;
}
	