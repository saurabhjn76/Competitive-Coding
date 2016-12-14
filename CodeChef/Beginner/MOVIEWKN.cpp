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
   int n;
   cin >> n;
   int a[n],b[n];
   int max=0,maxind=0,maxR=0;
   for(int i=0;i<n;i++){
   	cin >> a[i];
   }
   for(int i=0;i<n;i++)
   	cin >> b[i];
   	for(int i= n-1;i>=0;i--)
   		if(a[i]*b[i]>=max && b[i]>=maxR){
   			max=a[i]*b[i];
   			maxR=b[i];
   			maxind=i+1;
   		}
   		printf("%d\n",maxind );
  }

	
	return 0;
}
	