#include<stdio.h>
int main(void)
{
	int i;
	int flag[10] = {0};
	for(i=0;i<10;i++)
	{
		int n;
		scanf("%d",&n);
		flag[n] = 1;
	}
	int j;
	for(j=0;j<10;j++)
	{
		if(flag[j]==0)
		{
			printf("%d",j);
		}
	}
}