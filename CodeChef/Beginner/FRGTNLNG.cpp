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
  int n,m;
  cin >> n >> m;
  char a[n][101];
  bool bb[n];
  fill_n(bb,n,false);
  for(int i=0;i<n;i++)
  	scanf("%s",a[i]);
  for(int i=0;i<m;i++){
  	int j;
  	cin >> j;
  	char ss[101];
  	for(int k=0;k<j;k++){
  		scanf("%s",ss);
  		for(int x=0;x<n;x++){
  			if(strcmp(ss,a[x])==0)
  			{
  				bb[x]=true;
  				break;
  			}
  		}
  	}
  }
  for(int i=0;i<n-1;i++){
  	if(bb[i])
  		printf("YES ");
  	else
  		printf("NO ");
  }
  if(bb[n-1])
  	printf("YES\n");
  else
  	printf("NO\n");
  }
	
	return 0;
}
	