#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

void traverse(vector<int>*sett,bool *visted,int n){
  if(visted[n])
    return ;
  else{
    visted[n]=true;
    for(vector<int>::iterator it =sett[n].begin();it!=sett[n].end();it++){
   //   printf("%d-->%d\n",n,*it );
      traverse(sett,visted,*it);
    }
  }
}

bool check_connected(bool *visted,int n){
  for(int i=0;i<n;i++){
    if(!visted[i])
      return false;
  }
  return true;
}


int main()
{
  int t=1;
  //cin >> t;
  while(t--){
  	int n,m;
  	s(n);s(m);
    bool connected=false;
  	int a[n+1][2];
    bool visted[n+1];
    fill_n(visted,n+1,false);
    visted[0]=true;
  	fill(a[0],a[0]+(n+1)*2,0);
  	int b[n+1][2];
  	vector <int> sett[n+1];
  	int u,v; 
  	int edg[m][2];
    int c[n+1][2];
    int changed[m][2];
  	for(int i=0;i<m;i++){
  		s(u);s(v);
  		edg[i][0]=u;edg[i][1]=v;
  		sett[u].push_back(v);
  		sett[v].push_back(u);
  		a[u][0]++;
  		a[v][1]++;
  	}
    traverse(sett,visted,1);
    connected=check_connected(visted,n+1);
    /*if(connected)
      printf("Connected\n");
    else
      printf("Not Connected\n");*/
  	int sum=0;int change_count=0;
  	bool flag=true;
    if(connected){
  	for(int i=1;i<n+1;i++){
  	//	printf("%d-%d\n",a[i][0],a[i][1]);
  		if((a[i][0]+a[i][1])%2==1)
  			flag=false;
  		b[i][0]=a[i][0]-a[i][1];
  		sum+=b[i][0];
  		b[i][1]=i;
  	}
  	if(sum==0 && flag)
  		printf("YES\n");
  	else
  		printf("NO\n");
  	//sort_by_index(b,n+1);
  	if(sum==0 && flag){
  	for(int i=1;i<n+1;i++){
  		if(b[i][0]<0){
  			while(b[i][0]!=0){
  				for(vector<int>::iterator it =sett[i].begin();it!=sett[i].end();it++){
  					if(b[*it][0]>0){
  						b[*it][0]-=2;
  						b[i][0]+=2;
  					//	printf("Changed:%d %d\n",i,*it);
              changed[change_count][0]=*it;
              changed[change_count++][1]=i;
  					}
  					if(b[i][0]==0)
  						break;
  				}
  			}
  		}
  	}
     if(change_count==0){
          for(int i=0;i<m;i++){
            printf("%d %d\n",edg[i][0],edg[i][1]);
          }
     }
     else{
            for(int i=0;i<m;i++){
              if((a[edg[i][0]][0]-a[edg[i][0]][1])!=0){
              for(int j=0;j<change_count;j++){
                if(edg[i][0]==changed[j][0] && edg[i][1]==changed[j][1])
                {
                  printf("%d %d\n",edg[i][1],edg[i][0]);
                  break;
                }else
                if(j==change_count-1){
                  printf("%d %d\n",edg[i][0],edg[i][1]);
                }
              }
            }
            else{
              //printf("----------------\n");
              printf("%d %d\n",edg[i][0],edg[i][1]);
            }
            }
          }

  }
}
else{
  printf("NO\n");
}

  	
  }
	
	return 0;
}
	