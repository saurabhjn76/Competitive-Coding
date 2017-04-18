#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int i,j,t;
	scanf("%d",&t);
	char a[20001];int b[26];
	int c[2000];int fina=0;
	for(i=1;i<=t;i++)
	{
		scanf("%s",a);
		fina=0;
		for(int k=0;k<26;k++)
		{
			b[k]=0;
		}
		for(j=0;j<strlen(a);j++)
		{
			b[(int)(a[j])-65]++;
		}
		/*for(int k=0;k<26;k++)
		{
			printf("%d\n",b[k] );
		}*/
			printf("Case #%d: ",i);
		if(b[25]>0)
		{
			for(j=0;j<b[25];j++)
			{
				c[fina++]=0;
				b[4]--;
				b[14]--;
				b[17]--;
			}
			b[25]=0;
		}
		if(b[22]>0)
		{
			for(j=0;j<b[22];j++)
			{
				c[fina++]=2;
				b[19]--;
				b[14]--;
				
			}
			b[22]=0;
		}
		if(b[23]>0)
		{
			for(j=0;j<b[23];j++)
			{
				c[fina++]=6;
				b[8]--;
				b[18]--;
				
			}
			b[23]=0;
		}
		if(b[6]>0)
		{
			for(j=0;j<b[6];j++)
			{
				c[fina++]=8;

				b[4]--;
				b[8]--;
				b[7]--;
				b[19]--;

			}
			b[6]=0;
		}
		if(b[7]>0)
		{
			for(j=0;j<b[7];j++)
			{
				c[fina++]=3;
				b[4]--;
				b[4]--;
				b[17]--;
				b[19]--;

			}
			b[7]=0;
		}
		if(b[17]>0)
		{
			for(j=0;j<b[17];j++)
			{
				c[fina++]=4;

				b[5]--;
				b[14]--;
				b[20]--;

			}
			b[7]=0;
		}
		if(b[5]>0)
		{
			for(j=0;j<b[5];j++)
			{
				c[fina++]=5;
				b[8]--;
				b[21]--;
				b[4]--;

			}
			b[5]=0;
		}
		if(b[14]>0)
		{
			for(j=0;j<b[14];j++)
			{
				c[fina++]=1;
				b[13]--;
				b[4]--;

			}
			b[14]=0;
		}
		if(b[18]>0)
		{
			for(j=0;j<b[18];j++)
			{
				c[fina++]=7;
				b[4]--;
				b[21]--;
				b[4]--;
				b[13]--;

			}
			b[18]=0;
		}
		if(b[8]>0)
		{
			for(j=0;j<b[8];j++)
			{
				c[fina++]=9;

				b[13]--;
				b[13]--;
				b[4]--;

			}
			b[8]=0;
		}


		sort(c,c+fina);
		for(j=0;j<fina;j++)
			printf("%d",c[j] );
		printf("\n");



		//printf("Case #%d: ",i);

	}

	return 0;
}
	