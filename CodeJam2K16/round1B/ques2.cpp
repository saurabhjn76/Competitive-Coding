#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int i,j,t;
	scanf("%d",&t);
char a[40];char b[40];
	for(i=1;i<=t;i++)
	{
		scanf("%s",a);
		scanf("%s",b);
		int l=strlen(a);
		char big='e';
		for(j=0;j<l;j++)
		{
			if(a[j]=='?' && b[j]=='?' && big=='e')
				{
					a[j]='0'; b[j]='0';
					if(j+1<l)
					{
						 if(a[j+1]!='?' && b[j+1]!='?' && big=='e')
						 {
						 	if(abs(a[j+1]-b[j+1])>5)
						 	{
						 		if(a[j+1]>b[j+1])
						 		{
						 			a[j]='0';
						 			b[j]='1';
						 		}
						 		else
						 		{
						 			a[j]='1';
						 			b[j]='0';
						 		}
						 	}
						 	else
						 	{
						 		a[j]='0';
						 		b[j]='0';
						 	}

						 }
					}
					else
						{
							a[j]='0'; b[j]='0';
						}

				}
			else if(a[j]=='?' && b[j]=='?' && big=='a')
				{
					a[j]='0'; b[j]='9';
				}
			else if(a[j]=='?' && b[j]=='?' && big=='b')
				{
					a[j]='9'; b[j]='0';
				}
			else if(a[j]=='?' && b[j]!='?' && big=='e')
				a[j]=b[j];
			else if(a[j]!='?' && b[j]=='?' && big=='e')
				b[j]=a[j];
			else if(a[j]=='?' && b[j]!='?' && big=='a')
				a[j]='0';
			else if(a[j]=='?' && b[j]!='?' && big=='b')
				a[j]='9';
			else if(a[j]!='?' && b[j]=='?' && big=='a')
				b[j]='9';
			else if(a[j]!='?' && b[j]=='?' && big=='b')
				b[j]='0';
			else if(a[j]!='?' && b[j]!='?' && (big=='a' || big=='b'))
				continue;
			else if(a[j]!='?' && b[j]!='?' && big=='e')
				{
					if(a[j]>b[j])
						big='a';
					else if(a[j]==b[j])
						big='e';
					else
						if(a[j]<b[j])
							big='b';
				}
		}
		printf("Case #%d: %s %s\n",i,a,b);

	}

	return 0;
}
