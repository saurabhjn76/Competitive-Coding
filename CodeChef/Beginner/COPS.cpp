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
  bool house[101];

  while(t--){
  	fill_n(house,101,false);
  	int m,x,y;
  	cin >> m >> x >> y;
  	int a[m];
  	for(int i=0;i<m;i++){
  		scanf("%d",&a[i]);
  		for(int j=a[i]-x*y;j<=a[i]+x*y;j++)
  		{
  			if(j>=0 && j<=100)
  				house[j]=true;

  		}
  	}
  	int count=0;
  	for(int i=1;i<=100;i++){
  		if(!house[i]){
  			count++;
  		}
  	}
  	printf("%d\n", count);

  }
	
	return 0;
}
	