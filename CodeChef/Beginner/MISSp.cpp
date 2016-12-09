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
  int a[100002];
  while(t--){
   int n,b;
   cin >> n;
   fill_n(a,100002,0);
   for(int i=0;i<n;i++){
   	cin >>b;
   	a[b]++;
   }
   for(int i=0;i<100002;i++)
   	if(a[i]%2!=0)
   	{
   		printf("%d\n",i );
   		break;
   	}
  }
	
	return 0;
}
	