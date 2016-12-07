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
  	int r,a,b,c,d,e,f;
  	 cin >> r >> a >> b >> c >> d >> e >> f;
  	int count=0;

  	if(pow((c-a),2)+ pow((d-b),2)<=r*r )
  		count++;
  	if((pow((e-a),2)+ pow((f-b),2))<=r*r)
  			count++;
  	if((pow((e-c),2)+ pow((f-d),2))<=r*r)
  			count++;
  		//printf("%d\n",count );
  		if(count>1)
  		printf("yes\n");
  	else
  		printf("no\n");
  
  }
	
	return 0;
}
	