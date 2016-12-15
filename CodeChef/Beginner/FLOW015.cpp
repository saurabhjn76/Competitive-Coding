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
  int odd=0;
  int lep=0;
  cin >> n;
  for(int i=1900;i<n;i++)
            if((i%4==0 && i%100!=0)||(i%400==0))
                lep++;

  switch((n+lep-1900+1)%7){
  	case 0:printf("sunday\n");
  	break;
  	case 1 : printf("monday\n");
  	break;
  	case 2 : printf("tuesday\n");
  	break;
  	case 3 : printf("wednesday\n");
  	break;
  	case 4: printf("thursday\n");
  	break;
  	case 5 : printf("friday\n");
  	break;
  	case 6: printf("saturday\n");
  }


  }
	
	return 0;
}
