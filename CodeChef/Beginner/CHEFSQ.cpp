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
   int a[n];
   for(int i=0;i<n;i++){
   	cin >> a[i];

   }
   int m;
   cin >> m;
   int b[m];
   for(int i=0;i<m;i++)
   	cin >> b[i];
   int flag=0,j=0;
   for(int i=0; i<=n;i++){
   		if(a[i]==b[j])
   		j++;
   		if(j==m-1)
   		{
   			flag=1;
   			printf("Yes\n");
   			break;
   		}	
   	}
   	if(flag==0)
   		printf("No\n");
   
  }
	
	return 0;
}
