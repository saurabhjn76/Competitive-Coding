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

int main()
{
  int t=readInt();
  while(t--){
  	int n,k;
  	cin >> n >> k;
  	int a[n];
  	//printf("%d %d\n",n,k );
  	for(int i=0;i<n;i++){
  		cin >> a[i];
  	}
  	sort(a,a+n);
  	double sum=0;
  	for(int i=k;i<n-k;i++)
  		{	printf("%d\n",a[i] );
  			sum+=a[i];
  		}
  	printf("%f\n",sum/(n-2*k));
  
  }
	
	return 0;
}
	