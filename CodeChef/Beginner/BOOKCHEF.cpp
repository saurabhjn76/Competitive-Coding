#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007

struct  Network
{
	int a;
	char b[1000];
}N[1001],E[1001];

bool CompareData(const Network& A, const Network& B)
{
    return A.a > B.a; //this sorts by age atm
}
int main()
{
	int i,j,k,n,m;
	scanf("%d %d",&n,&m);
	bool special[100001];
	fill_n(special,100001,false);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		special[j]=true;
	}

	int nt=0,et=0;
	for(int i=0;i<m;i++){
		scanf("%d",&j);
	if(special[j]){
		scanf("%d %s",&E[et].a, E[et].b);
		et++;
	}
	else
	{
		scanf("%d %s",&N[nt].a, N[nt].b);
		nt++;
	}
}	
	sort(E,E+et,&CompareData);
	sort(N,N+nt,&CompareData);
	for(i=0;i<et;i++){
		printf("%s\n",E[i].b );
	}
	for(i=0;i<nt;i++){
		printf("%s\n",N[i].b );
	}


	return 0;
}

	