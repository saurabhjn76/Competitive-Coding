#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{	int n,i,j,k,m,l;
	scanf("%d",&n);
	int a[n+2],b[n+2];
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	b[0]=a[0]=-1;
	b[n+1]=a[n+1]=1000001;
	int flag=0;
	for(i=1;i<n;i++){
		if(a[i]>a[i+1]){
			flag=1;
			break;
		}
	}
	int count=0;
	int first_index=-1;
	int second_index=-1;
	int first_increase=-1;
	int first_decrease=-1;
	if(flag==0)
		printf("yes\n");
	else{

		sort(b,b+n+2);
		for(i=1;i<=n;i++){
			if(a[i]!=b[i])
				{
					count++;
					if(first_index==-1)
						first_index=i;
					else if(second_index==-1)
						second_index=i;
					if(count>3)
						break;
				}
		}
		int flag2=0;
		if(count==2){
			printf("yes\nswap %d %d\n",first_index,second_index);
		}
		else{
			for(i=1;i<=n;i++){
				if(a[i]>a[i-1] && a[i]>a[i+1])
					first_increase=i;
				if(a[i]<a[i+1] && a[i]<a[i-1])
					first_decrease=i;
			}
			for(i=1,j=1;i<first_increase;i++,j++){
				if(a[i]!=b[j])
				{
					flag2=1;
					break;
				}
			}
				for(i=first_decrease;i>=first_increase;i--,j++){
					if(a[i]!=b[j])
					{
						flag2=1;
						break;
					}
				}
				for(i=first_decrease+1;i<=n;i++,j++){
					if(a[i]!=b[j])
					{
						flag2=1;
						break;
					}
				}	
			if(flag2==0)
				printf("yes\nreverse %d %d\n",first_increase,first_decrease);
			else
				printf("no\n");

		}


	}
	return 0;
}
	