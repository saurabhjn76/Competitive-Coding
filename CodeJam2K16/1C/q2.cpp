#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007

int min(int a,int b,int c)
{
	if(a<b)
	{
		if(a<c)
			return 1;
		else
			return 3;
	}
	else
	{
		if(b<c)
			return 2;
		else
			return 3;
	}
}
int mina(int a,int b,int c)
{
	if(a<b)
	{
		if(a<c)
			return a;
		else
			return c;
	}
	else
	{
		if(b<c)
			return b;
		else
			return c;
	}
}
int max(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
			return a;
		else
			return c;
	}
	else
	{
		if(b>c)
			return b;
		else
			return c;
	}
}
int minnn(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}

int main()
{
	int i,t,l,m,n,o;
	scanf("%d",&t);
	int j,p,s,k;
	for(i=1;i<=t;i++)
	{
		scanf("%d %d %d %d",&j,&p,&s,&k);
		int full_max_days=j*p*s;
		int min_days=0;
		int full_loop=0;
		switch(min(j*p,p*s,j*s))
		{
			case 1:min_days=j*p;
					full_loop=s;
					break;
			case 2:min_days=s*p;
					full_loop=j;
					break;
			case 3:min_days=j*s;
					full_loop=p;
					break;
		}
		if(k>=mina(j,p,s))
		{

		printf("Case #%d: ",i);
		int max_days=full_max_days>min_days*k?min_days*k:full_max_days;
		printf("%d\n",max_days);
		/*for(l=0;l<max_days;l++)
		{*/
			/*for(m=1;m<=j;m++)
			{
				for(n=1;n<=p;n++)
				{
					for(o=1;o<=s;o++)
					{
						printf("%d %d %d\n",m,n,o);
					}
				}
			}*/
		// }
					if(full_loop==s)
		{
			for(m=1;m<=j;m++)
			{
				for(n=1;n<=p;n++)
				{
					for(o=1;o<=s && o<=k;o++)
					{
						printf("%d %d %d\n",m,n,o);
					}
				}
			}
		}
		else if(full_loop==p)
		{
			for(m=1;m<=j;m++)
			{
				 for(o=1;o<=s;o++)
				{
					for(n=1;n<=p && n <=k;n++) 
					{
						printf("%d %d %d\n",m,n,o);
					}
				}
			}
		}
		else
		{
			for(n=1;n<=p;n++) 
			{
				 for(o=1;o<=s;o++)
				{
					for(m=1;m<=j && m<=k;m++)
					{
						printf("%d %d %d\n",m,n,o);
					}
				}
			}
		}
	}
	else
	{
		printf("Case #%d: ",i);
			printf("%d\n",mina(j,p,s));
			for(n=1;n<=p  && n<=k;n++) 
			{
				 for(o=1;o<=s && o<=k;o++)
				{
					for(m=1;m<=j && m<=k;m++)
					{
						printf("%d %d %d\n",m,n,o);
					}
				}
			}
		}
		
	

	}

	return 0;
}
	