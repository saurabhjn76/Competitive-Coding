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

typedef struct player
{
	int rank;
	int rating;
	int max_rating;
	bool rated;
	int min_rating;
	int time;
	char color;
	bool find;
	int match;
} player;

bool compare(const player &a, const player &b)
{
    if(a.rating < b.rating)
    	return true;
    else if(a.rating == b.rating){
    	return a.max_rating < b.max_rating;
    } else
    	return false;
}

int main()
{
  int t;
  cin >> t;
  while(t--){
    int n;
    vector<player> v;
    player v1;
   	s(n);
   	string rated;
   	string color;
   	R(i,n){
   		v1.rank=i+1;
   		s(v1.rating); s(v1.min_rating);s(v1.max_rating);
   		s(v1.time); 
   		cin >> rated;
   		cin >> color;
   		v1.find=true;
   		v1.match=-1;
   		v1.color = color[0];
   		if(rated[0]=='u'){
   			v1.rated=false;
   		} else
   			v1.rated=true;
   		v.push_back(v1);
   	}
   	//sort(v_rated.begin(),v_rated.end(),compare);
   //	sort(v_unrated.begin(), v_unrated.end(),compare);
   R(i,(int)v.size()){
  // 	printf("%d %d\n",v[i].rank,v[i].match );
   		for(int j=0;j<i;j++){
   			if(v[j].find){
   			//printf("%d %d\n",v[i].rank,j );
   			if(v[j].rated == v[i].rated && v[i].time == v[j].time && v[j].rating <= v[i].max_rating && v[j].rating >= v[i].min_rating && v[i].rating <=v[j].max_rating && v[i].rating >= v[j].min_rating && ((v[j].color=='r' && v[i].color=='r') || (v[j].color=='w' && v[i].color=='b')|| (v[j].color=='b' && v[i].color=='w'))){
   				v[i].find=false;
   				v[j].find=false;
   				v[i].match=v[j].rank;
   				break;
   			}
   		}
   	}
   }
   R(i,v.size()){
   	if(v[i].match==-1){
   		printf("wait\n");
   	} else{
   		printf("%d\n", v[i].match );
   	}
   }

  }
	
	return 0;
}