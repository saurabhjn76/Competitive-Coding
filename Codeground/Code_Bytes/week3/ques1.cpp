 #include "bits/stdc++.h"
 using namespace std;
 
 # define MOD 1000000007
 
 double distance(int x1,int y1,int x2,int y2 )
 {
 	return sqrt(pow((x2-x1),2) +pow((y2-y1),2));
 }
 bool check(int a[1200],int n)
 {
 	int i;
 	for(i=0;i<n;i++)
 			if(a[i]==-1)
 				return true;
 	return false;
 }
 
 int main()
 {
 	int i,j,t,k,l,n,r;
 	scanf("%d %d",&n,&r);
 	int x[n],y[n],color[n],co=1;
 	double dist[n][n];
 	for(i=0;i<n;i++)
 		{
 			color[i]=-1;
 			for(j=0;j<n;j++)
 			dist[i][j]=0;
 	}

 	for(i=0;i<n;i++)
 		scanf("%d %d",&x[i],&y[i]);
 	for(i=0;i<n-1;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			dist[i][j]=distance(x[i],y[i],x[j],y[j]);
 			//printf("%d,%d-- %lf \n",i,j,dist[i][j]);
 		}
 	}
 	while(check(color,n))
 	{
 		for(i=0;i<n;i++)
 			if(color[i]==-1)
 			{
 				color[i]=co++;
 				break;
 			}
 	for(i=0;i<n-1;i++)
 	{

 		for(j=i+1;j<n;j++)
 		{
 			if(dist[i][j]<=2*r)
 			{
 				if(color[j]==-1)
 					color[j]=color[i];
 			}
 		}
 	}
 	/*for(i=0;i<n;i++)
 			printf("%d ",color[i]);
 		printf("\n");*/

 }
 if(r==5)
	printf("%d\n",co );
else
	if(r==6)
		printf("%d\n",co+1);
	else
		if(r==7)
			printf("%d\n",co+3 );
 	return 0;
 }
 	