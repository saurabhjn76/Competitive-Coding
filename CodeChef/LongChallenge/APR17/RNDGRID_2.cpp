#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf(" %c",&n)
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
typedef struct  {
	int x;
	int y;
}node;


int main()
{
  int t;
  cin >> t;
  while(t--){
  	int n,l;
  	string s;
  	s(l);s(n);
  	int a[n][n];
  	node bc[n][n];
  	cin >> s;
  	bool empty=true;
  	char ab;
  	vector<node> v;
  	v.clear();
  	int count_hash=0;
  	int count_dot=0;
  	R(i,n){
  		R(j,n){
  			sc(ab);
  			bc[i][j].x=i;
  			bc[i][j].y=j;
  		if(ab=='#'){
			a[i][j]=0;
			node x;
			x.x=i;
			x.y=j;
			count_hash++;
			v.push_back(x);
			}else{ 
			a[i][j]=1;
			count_dot++;
  			}
  		}
  	}
  	/*R(i,v.size()){
  		printf("%d %d\n",v[i].x,v[i].y );
  	}
 */	if(count_hash<n+n/2){
  		int RL[n],UD[n];
  		int bcc[n][n];
  		fill(bcc[0], bcc[0]+n*n,INT_MAX);
  		fill_n(RL,n,l);
  		fill_n(UD,n,l);
      int R=0,L=0,U=0,D=0;
  		R(k,l){
  			switch(s[k]){
          case 'R':R++; L--;   break;
          case 'L': L++; R--;  break;
          case 'U': U++; D--;  break;
          case 'D' : D++; U--; break;
        }
        if(R>0){  if(n-R>-1 && RL[n-R]>k) { RL[n-R]=k;}
			R(jj,v.size()){
				if(v[jj].y-R>-1)
				{
					if(D>0 && v[jj].x-D>-1 && bcc[v[jj].x-D][v[jj].y-R]>k)
						bcc[v[jj].x-D][v[jj].y-R]=k;
					 else if(U>=0 && v[jj].x+U<n && bcc[v[jj].x+U][v[jj].y-R]>k)
					bcc[v[jj].x+U][v[jj].y-R]=k;
				}
			}
			}
			if(L>0){if(L-1<n && RL[L-1]>k){RL[L-1]=k; }
				R(jj,v.size()){
				if(v[jj].y+L<n)
				{
					if(D>0 && v[jj].x-D>-1 && bcc[v[jj].x-D][v[jj].y+L]>k)
					bcc[v[jj].x-D][v[jj].y+L]=k;
					else if(U>=0 && v[jj].x+U<n && bcc[v[jj].x+U][v[jj].y+L]>k)
						bcc[v[jj].x+U][v[jj].y+L]=k;
				}
			}
			}
			if(U>0){if(U-1<n && UD[U-1]>k){ UD[U-1]=k;}
				R(jj,v.size()){
				if(v[jj].x+U<n)
				{
					if(R>0 && v[jj].y-R>-1 && bcc[v[jj].x+U][v[jj].y-R]>k)
					bcc[v[jj].x+U][v[jj].y-R]=k;
					else if(L>=0 && v[jj].y+L<n && bcc[v[jj].x+U][v[jj].y+L]>k )
					bcc[v[jj].x+U][v[jj].y+L]=k;

				}
			}
			 }
			if(D>0){if(n-D>-1 && UD[n-D]>k){ UD[n-D]=k;}
				R(jj,v.size()){
				if(v[jj].x-D>-1)
				{
					if(R>0 && v[jj].y-R>-1 && bcc[v[jj].x-D][v[jj].y-R]>k)
					bcc[v[jj].x-D][v[jj].y-R]=k;
					 else if(L>=0 && v[jj].y+L<n && bcc[v[jj].x-D][v[jj].y+L]>k)
						bcc[v[jj].x-D][v[jj].y+L]=k;
				}
			}
				}

  		}
      int xo=0;
      R(j,n){
        R(k,n){
        	if(a[j][k]==1){
          xo^=min(min(RL[k],UD[j]),bcc[j][k]);
          //printf("%d ",min(min(RL[k],UD[j]),bcc[j][k]));
      }
      //else
      //	printf("# ");
        }
        //printf("\n");
      }
      printf("%d\n",xo );
  }
  else{
  	int b[n][n];
  	int temp_i=0,temp_j=0;
  	fill(b[0],b[0] + n * n, 0);
  	ll xo=0;
  	R(i,n){
  		R(j,n){
  			temp_i=i;
  			temp_j=j;
  			if(a[i][j]==1){
	  			R(k,l){
	  				//printf("%c  ",s[k] );
	  				switch(s[k]){
	  					case 'R':	if(temp_j+1<n  && a[temp_i][temp_j+1]!=0){ b[i][j]++; temp_j++;}else k=l;  break;
	  					case 'U':	if(temp_i-1>-1 &&   a[temp_i-1][temp_j]!=0) { b[i][j]++; temp_i--;}else k=l; break;
	  					case 'L':	if(temp_j-1>-1 && a[temp_i][temp_j-1]!=0) { b[i][j]++; temp_j--;}else k=l; break;
	  					case 'D':	if(temp_i+1<n && a[temp_i+1][temp_j]!=0) { b[i][j]++; temp_i++;}else k=l; break;
	  				}
	  			}
  			if(b[i][j]!=0)
  			xo^=b[i][j];
  			}
  			
  		}
  	}
  	/*R(i,n){
  		R(j,n){
  			printf("%d ",b[i][j] );
  		}
  		printf("\n");
  	}*/
  		printf("%lld\n",xo );
  }
  	}

	
	return 0;
}
	