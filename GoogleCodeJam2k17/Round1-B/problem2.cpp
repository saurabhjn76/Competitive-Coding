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
//N, R, O, Y, G, B, and V.
//	0 2 4
int main()
{
  int t;
  cin >> t;
  R(i,t){
  	int a[6],n;
  	s(n);
  	R(j,6){
  		s(a[j]);
  	}
  	int b[n],k=0;
  	fill_n(b,n,0);
  	if(a[0]<=a[2] && a[2] <=a[4]){
  	while(a[0]>0){
  		b[k]=1;
  		k+=3;a[0]--;
  		if(k>n-1)
  			break;
  
  	}
  	k=min(k,1);
  	while(a[2]>0){
  		b[k]=2;
  		k+=3;a[2]--;
  		if(k>n-1)
  			break;	
  	}
  	k=min(k,2);
  	while(a[4]>0){
  		b[k]=3;
  		k+=3;a[4]--;
  		if(k>n-1)
  			break;
  		
  	}
  }else if(a[0]<=a[2] && a[4] <=a[2] && a[0] <=a[4]){
  	while(a[0]>0){
  		b[k]=1;
  		k+=3;a[0]--;
  		if(k>n-1)
  			break;
  
  	}
  	k=min(k,1);
  	while(a[4]>0){
  		b[k]=3;
  		k+=3;a[4]--;
  		if(k>n-1)
  			break;
  			
  	}
  	k=min(k,2);
  	while(a[2]>0){
  		b[k]=2;
  		k+=3;a[2]--;
  		if(k>n-1)
  			break;
  		
  	}
  }
  else if(a[2]<=a[0] && a[0] <=a[4]){
  	while(a[2]>0){
  		b[k]=2;
  		k+=3;a[2]--;
  		if(k>n-1)
  			break;
  
  	}
  	k=min(k,1);
  	while(a[0]>0){
  		b[k]=1;
  		k+=3;a[0]--;
  		if(k>n-1)
  			break;
  			
  	}
  	k=min(k,2);
  	while(a[4]>0){
  		b[k]=3;
  		k+=3;a[4]--;
  		if(k>n-1)
  			break;
  		
  	}
  }
  else if(a[2]<=a[0] && a[4] <=a[0] && a[2] <=a[4]){
  	while(a[2]>0){
  		b[k]=2;
  		k+=3;a[2]--;
  		if(k>n-1)
  			break;
  
  	}
  	k=min(k,1);
  	while(a[4]>0){
  		b[k]=3;
  		k+=3;a[4]--;
  		if(k>n-1)
  			break;
  		
  	}
  	k=min(k,2);
  	while(a[0]>0){
  		b[k]=1;
  		k+=3;a[0]--;
  		if(k>n-1)
  			break;
  			
  	}
  	
  }
  else if(a[4]<=a[0] && a[0] <=a[2]){
  	while(a[4]>0){
  		b[k]=3;
  		k+=3;a[4]--;
  		if(k>n-1)
  			break;
  
  	}
  	k=min(k,1);
  	while(a[0]>0){
  		b[k]=1;
  		k+=3;a[0]--;
  		if(k>n-1)
  			break;
  			
  	}
  	k=min(k,2);
  	while(a[2]>0){
  		b[k]=2;
  		k+=3;a[2]--;
  		if(k>n-1)
  			break;
  		
  	}
  }
  else if(a[4]<=a[0] && a[2] <=a[0] && a[4] <=a[2]){
  	while(a[4]>0){
  		b[k]=3;
  		k+=3;a[4]--;
  		if(k>n-1)
  			break;
  
  	}
  	k=min(k,1);
  	while(a[2]>0){
  		b[k]=2;
  		k+=3;a[2]--;
  		if(k>n-1)
  			break;
  		
  	}
  	k=min(k,2);
  	while(a[0]>0){
  		b[k]=1;
  		k+=3;a[0]--;
  		if(k>n-1)
  			break;
  			
  	}
  	
  }
  printf("____%d %d %d\n",a[0],a[2],a[4] );
  	R(k,n){
  		printf("%d ",b[k] );
  		if(b[k]==0){
  			if(k==0){ 
  				if(b[n-1]==0 && b[(k+1)%n]!=0){
  					if(b[(k+1)%n]==1){
  						if(a[4]>0){
  							b[k]=3;
  							a[4]--;
  						}
  						else if(a[2]>0){
  							b[k]=2;
  							a[2]--;
  						}
  					}
  					else if(b[(k+1)%n]==2){
  						if(a[4]>0){
  							b[k]=3;
  							a[4]--;
  						}
  						else if(a[0]>0){
  							b[k]=1;
  							a[0]--;
  						}
  					}
  					else if(b[(k+1)%n]==3){
  						if(a[0]>0){
  							b[k]=1;
  							a[0]--;
  						}
  						else if(a[2]>0){
  							b[k]=2;
  							a[2]--;
  						}
  					}
  				}
  				else if(b[n-1]==1 && b[(k+1)%n]!=2 && a[2]!=0){
  				b[k]=2;
  				a[2]--;
  			}
  			else if(b[n-1]==1 && b[(k+1)%n]!=3 && a[4]!=0){
  				b[k]=3;
  				a[4]--;
  			}
  			else if(b[n-1]==2 && b[(k+1)%n]!=1 && a[0]!=0){
  				b[k]=1;
  				a[0]--;
  			}
  			else if(b[n-1]==2 && b[(k+1)%n]!=3 && a[4]!=0){
  				b[k]=3;
  				a[4]--;
  			}
  			else if(b[n-1]==3 && b[(k+1)%n]!=2 && a[2]!=0){
  				b[k]=2;
  				a[2]--;
  			}
  			else if(b[n-1]==3 && b[(k+1)%n]!=1 && a[0]!=0){
  				b[k]=1;
  				a[0]--;
  			}
  		}
  		else{
  			if(b[k-1]==0 && b[(k+1)%n]!=0){
  					if(b[(k+1)%n]==1){
  						if(a[4]>0){
  							b[k]=3;
  							a[4]--;
  						}
  						else if(a[2]>0){
  							b[k]=2;
  							a[2]--;
  						}
  					}
  					else if(b[(k+1)%n]==2){
  						if(a[4]>0){
  							b[k]=3;
  							a[4]--;
  						}
  						else if(a[0]>0){
  							b[k]=1;
  							a[0]--;
  						}
  					}
  					else if(b[(k+1)%n]==3){
  						if(a[0]>0){
  							b[k]=1;
  							a[0]--;
  						}
  						else if(a[2]>0){
  							b[k]=2;
  							a[2]--;
  						}
  					}
  				}
  			else if(b[k-1]==1 && b[(k+1)%n]!=2 && a[2]!=0){
  				b[k]=2;
  				a[2]--;
  			}
  			else if(b[k-1]==1 && b[(k+1)%n]!=3 && a[4]!=0){
  				b[k]=3;
  				a[4]--;
  			}
  			else if(b[k-1]==2 && b[(k+1)%n]!=1 && a[0]!=0){
  				b[k]=1;
  				a[0]--;
  			}
  			else if(b[k-1]==2 && b[(k+1)%n]!=3 && a[4]!=0){
  				b[k]=3;
  				a[4]--;
  			}
  			else if(b[k-1]==3 && b[(k+1)%n]!=2 && a[2]!=0){
  				b[k]=2;
  				a[2]--;
  			}
  			else if(b[k-1]==3 && b[(k+1)%n]!=1 && a[0]!=0){
  				b[k]=1;
  				a[0]--;
  			}
  		}
  		}
  	}
  	printf("Case #%d: ",i+1);
  	if(a[0] >0 || a[2] >0 || a[4] >0){
  		printf("IMPOSSIBLE\n");
  	}
  	else
  	{
  		R(k,n){
  			switch(b[k]){
  				case 1:printf("R"); break;
  				case 2:printf("Y"); break;
  				case 3:printf("B"); break;
  			}
  		}
  		printf("\n");
  	}






  	
  	
  }
	
	return 0;
}
	