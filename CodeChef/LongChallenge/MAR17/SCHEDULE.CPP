#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

#define R(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while(t--){
  ll n,k; int in;
  sl(n);sl(k);
  set<int,greater<int> > v;
  int a[n]; fill_n(a,n,0);
  int count1=0,count0=0,maxx=0;
  if(n==1){
  	printf("1\n");
  	continue;
  }
  scanf("%1d",&in);
  in==0 ? count0++: count1++;
  R(i,n-1){
  	scanf("%1d",&in);
  	if(in==0 && count1==0){
  		count0++;
  	}
  	else if(in==1 && count0==0)
  		count1++;
  	else{
  		//printf("%d %d\n",count0,count1);
  		if(count1!=0){
  			a[count1]++;
  			v.insert(count1);
  			if(maxx<count1)
  				maxx=count1;
  			count0++;
  			count1=0;
  		}
  		else{
  			a[count0]++;
  			v.insert(count0);
  			if(maxx<count0)
  				maxx=count0;
  			count1++;
  			count0=0;
  		}
  	}

  }
 maxx=max(maxx,count1);
 maxx=max(maxx,count0);
  if(count1!=0){
		a[count1]++;
		v.insert(count1);
	}
  else{
  		a[count0]++;
  		v.insert(count0);
  	}
  	//sort(v.begin(),v.end(),greater<int>());
  R(i,maxx+1){
  	printf("%d ",a[i]);
  }
  printf("\n");
    for(set<int>::iterator it =v.begin();it!=v.end();it++)
  	printf("%d ",*it );
  printf("\n");
  for(set<int>::iterator it =v.begin();it!=v.end();it++){
  	if((*it-1)/2<(*(it++))){
  		
  	}
  }



  }
	
	return 0;
}
	