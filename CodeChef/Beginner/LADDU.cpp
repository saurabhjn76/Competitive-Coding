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
  	string s;
  	cin >> s;
  	bool indian =false;
  	if(s[0]=='I')
  		indian=true;
  	int lads=0;
  	for(int i=0;i<n;i++){
  		cin >> s;
  		switch(s.length()){
  			case 11: int rank; cin >> rank; lads+=300 + (20-rank > 0 ? 20-rank : 0 ); break;
  			case 15: lads+=300;break;
  			case 9: int sever; cin >> sever;lads+=sever;break;
  			case 14: lads+=50;break;
  		}

  	}
  	//printf("%d\n",lads);
  	if(indian){
  		printf("%d\n",lads/200 );
  	}
  	else
  		printf("%d\n",lads/400 );
  }
	
	return 0;
}
