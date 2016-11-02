#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	string s;
	int i,j=0,k=0,l,m,n;
	cin >> s;
	for(i=0;i<s.size();i++){
		if(s[i]=='S' && (i%3==0 || i%3==2))
			j++;
		if(s[i]=='O' && (i%3==1))
			k++;
	}
	int ans=0;
	ans+=2*s.size()/3-j + s.size()/3-k;
	printf("%d\n",ans );
	return 0;
}
	