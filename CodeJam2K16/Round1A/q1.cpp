#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k,l,t;
	char s[10001],b[10001],c[10001];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%s",s);
		int bcount=0,ccount=0;
		char cd;
		l=strlen(s);
		b[0]=s[0];
		cd=s[0];
		bcount++;
		for(j=1;j<l;j++)
		{
			if(s[j]>=cd)
			{
				c[ccount++]=s[j];
				cd=s[j];
			}
			else
			{
				b[bcount++]=s[j];
			}
		}
		printf("Case #%d: ",i);
		for(j=ccount-1;j>=0;j--)
			printf("%c",c[j] );
		for(j=0;j<bcount;j++)
			printf("%c",b[j] );
		printf("\n");
			
	}
	return 0;
}