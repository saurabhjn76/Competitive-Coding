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
  //int t=readInt();
	int t=1;
	string s;
	cin >> s;

  vector<int> C,H,E,F;
  while(t--){
  	for(int i=0;i<s.length();i++)
  	{
  		switch(s[i]){
  			case 'C':C.push_back(i);
  			break;
  			case 'H':H.push_back(i);
  			break;
  			case 'E':E.push_back(i);
  			break;
  			case 'F':F.push_back(i);
  			break;
  		}
  	}
  	int count=0;
  	int c=0,h=0,e=0,f=0;
  	while(c<C.size() && h<H.size() && e< E.size() && f < F.size())
  	{
  		if(C[c]< H[h] && H[h]< E[e] && E[e] < F[f]){
  			c++;h++;count++;e++;f++;
  		}
  		else if(C[c] > H[h]){
  			while(H[h] < C[c])
  			{
  				h++;
  				if(h==H.size())
  					break;
  			}
  		}
  		else if(H[h] > E[e]){
  			while(E[e] < H[h])
  			{
  				e++;
  				if(e==E.size())
  					break;
  			}
  		}
  		else if(E[e] > F[f]){
  			while(F[f] < E[e])
  			{
  				f++;
  				if(f==F.size())
  					break;
  			}
  		}

  	}
  	printf("%d\n",count );

  }
	
	return 0;
}
	