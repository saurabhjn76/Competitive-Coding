#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int i,j,k,l,n,m;
	scanf("%d",&n);
	while(n--)
	{
		string s;
		cin >> s;
		bool a[26];
		fill_n(a,25,false);
		int count=0;
		for(i=0;i<s.size();i++){
			if(!a[s[i]-'a'])
			{
				a[s[i]-'a']=true;
				count++;
			}
		}
		printf("%d\n",count );
		count=0;
	}
	return 0;
}
	