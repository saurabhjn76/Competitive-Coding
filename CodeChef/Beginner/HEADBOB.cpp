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
   scanf("%d",&n);
   string s;
   cin >> s;
   for(int i=0;i<n;i++){
   	if(s[i]=='Y')
   	{
   		printf("NOT INDIAN\n");
   		break;
   	}
   	else if(s[i]=='I'){
   		printf("INDIAN\n");
   		break;
   	}
   	else if(i==n-1){
   		printf("NOT SURE\n");
   	}
   }
  }
	
	return 0;
}
	