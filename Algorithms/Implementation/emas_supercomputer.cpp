#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int i,j,k,l,m,n,r=0,c=0,ans=0;
	scanf("%d %d",&n,&m);
	char a[20][20];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf(" %c",&a[i][j]);
		}
	}

	for (int x = 1; x <= n; x++) {
        for (int y = 1;y <= m; y++){
            int r = 0;
            while (a[x + r][y] == 'G' && a[x - r][y] == 'G' &&
                   a[x][y + r] == 'G' && a[x][y - r] == 'G') {
                a[x + r][y] = a[x - r][y] = a[x][y + r] = a[x][y - r] = 'g';
                for (int X = 1; X <= n; X++) {
                    for (int Y = 1; Y <= m; Y++){
                        int R = 0;
                        while (a[X + R][Y] == 'G' && a[X - R][Y] == 'G' && 
                                a[X][Y + R] == 'G' && a[X][Y - R] == 'G') {
                            ans = max(ans, (1 + 4 * r) * (1 + 4 * R));
                            R++;
                        }
                    }
                }
                r++;
            }
            r = 0;
            while (a[x + r][y] == 'g' && a[x - r][y] == 'g' && 
                    a[x][y + r] == 'g' && a[x][y - r] == 'g') {
                a[x + r][y] = a[x - r][y] = a[x][y + r] = a[x][y - r] = 'G';
                r++;
            }
        }
    }
    printf("%d\n",ans );
	return 0;
}
	