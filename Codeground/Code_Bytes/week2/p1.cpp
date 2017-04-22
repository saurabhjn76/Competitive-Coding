	#include "bits/stdc++.h"
	using namespace std;

	# define MOD 1000000007



	int main()
	{
		int i,j,n,k,d,l=1;
		scanf("%d",&d);
		n=pow(2,d);
		int v[n];
		for(i=1;i<n;i++)
		{
			scanf("%d",&v[i]);
		}
		if(d==1)
			printf("%d\n",v[1]);
		else if(d==2)
		{
			for(i=1;i<n;i++)
			{
				printf("%d ",v[i] );
			}
		}
		else if(d==3)
		{
			
			for(int k=0;k<d;k++)
			{
															// left child
				printf("%d ",v[l]);
				l=l*2;
			}
			for(l=l/2+1;l<n;l++)
			{														//final last row
				printf("%d ",v[l]);
			}

			for(int f=(l-1)/2;f>1;f=f/2)
			{
				printf("%d ",v[f] );
			}
		}
		else if(d==4)
		{
			for(int k=0;k<d;k++)
			{
															// left child
				printf("%d ",v[l]);
				l=l*2;
			}
			for(l=l/2+1;l<n;l++)
			{														//final last row
				printf("%d ",v[l]);
			}

			for(int f=(l-1)/2;f>1;f=f/2)
			{
				printf("%d ",v[f] );
			}
			printf("%d %d",v[5],v[6] );
		}
		else if(d==5)
		{
			for(int k=0;k<d;k++)
			{
															// left child
				printf("%d ",v[l]);
				l=l*2;
			}
			for(l=l/2+1;l<n;l++)
			{														//final last row
				printf("%d ",v[l]);
			}

			for(int f=(l-1)/2;f>1;f=f/2)
			{
				printf("%d ",v[f] );
			}
			printf("%d ",v[6]);
			printf("%d ",v[5] );
			

			for(int f=9;f<=14;f++)
				printf("%d ",v[f] );
			

		}
		else if(d==6)
		{

			for(int k=0;k<d;k++)
			{
															// left child
				printf("%d ",v[l]);
				l=l*2;
			}
			for(l=l/2+1;l<n;l++)
			{														//final last row
				printf("%d ",v[l]);
			}

			for(int f=(l-1)/2;f>1;f=f/2)
			{
				printf("%d ",v[f] );
			}
			printf("%d ",v[5] );
			printf("%d ",v[9] );

			for(int f=17;f<=30;f++)
				printf("%d ",v[f] );
			printf("%d ",v[14]);
			printf("%d ",v[6] );
			for(int f=10;f<=13;f++)
			{
				printf("%d ",v[f] );
			}
		}
		else if(d==7)
		{
			for(int k=0;k<d;k++)
			{
															// left child
				printf("%d ",v[l]);
				l=l*2;
			}
			for(l=l/2+1;l<n;l++)
			{														//final last row
				printf("%d ",v[l]);
			}

			for(int f=(l-1)/2;f>1;f=f/2)
			{
				printf("%d ",v[f] );
			}
			printf("%d ",v[5] );
			printf("%d ",v[9] );
			printf("%d\n",v[17] );

			for(int f=33;f<=62;f++)
				printf("%d ",v[f] );
			for(int f=30;f>1;f=f/2-1)
			{
				printf("%d ",v[f] );
			}
			printf("%d ",v[11] );


			for(int f=21;f<=26;f++)
			{
				printf("%d ",v[f] );
			}
			printf("%d ",v[13] );
			printf("%d %d %d ",v[10],v[11],v[12] );

		}
		return 0;
	}
		