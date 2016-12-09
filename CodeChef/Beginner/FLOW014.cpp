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
  float a,b,c;
  cin  >> a >> b >>c;
  bool flag1=false,flag2=false,flag3=false;
  if(a>50)
  	flag1=true;
  if(b<0.7)
  	flag2=true;
  if(c>5600)
  	flag3=true;
  if(flag1 && flag2 && flag3)
  	printf("10\n");
  else if(flag1 && flag2)
  	printf("9\n");
  else if(flag2 && flag3)
  	printf("8\n");
  else if(flag1 && flag3)
  	printf("7\n");
  else if(flag1 || flag2 || flag3)
  	printf("6\n");
  else
  	printf("5\n");
  }
	
	return 0;
}
	