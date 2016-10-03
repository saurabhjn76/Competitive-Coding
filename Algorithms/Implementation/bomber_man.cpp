#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007



int main()
{
	int r,c,i,j,k;
	long int n;
	scanf("%d %d %ld",&r,&c,&n);
	char a[r][c],b[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf(" %c",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(a[i][j]=='O'){
				if(i+1<r){
					if(a[i+1][j]=='.')
						a[i+1][j]='X';
				}
				if(i-1>=0){
					if(a[i-1][j]=='.')
						a[i-1][j]='X';
				}
				if(j+1<c){
					if(a[i][j+1]=='.')
						a[i][j+1]='X';
				}
				if(j-1>=0){
					if(a[i][j-1]=='.')
						a[i][j-1]='X';
				}

			}
		}
	}
	if(n==1){
		for(i=0;i<r;i++){
					for(j=0;j<c;j++){
						if(a[i][j]=='O')
						printf("%c",a[i][j] );
						else
							printf(".");
					}
						printf("\n");
				}
				return 0;
	}
	switch(n%4){
		case 0:
		case 2:for(int i=0;i<r;i++){
					for(int j=0;j<c;j++)
						printf("O");
						printf("\n");}
						break;
		case 1:		for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					if(a[i][j]=='.')
						a[i][j]='O';
					else
						a[i][j]='.';
				}
			}
				for(int i=0;i<r;i++){
					for(int j=0;j<c;j++){
						if(a[i][j]=='O'){
							if(i+1<r){
								if(a[i+1][j]=='.')
									a[i+1][j]='X';
							}
							if(i-1>=0){
								if(a[i-1][j]=='.')
									a[i-1][j]='X';
							}
							if(j+1<c){
								if(a[i][j+1]=='.')
									a[i][j+1]='X';
							}
							if(j-1>=0){
								if(a[i][j-1]=='.')
									a[i][j-1]='X';
							}

						}
					}
				}
				for(int i=0;i<r;i++){
					for(int j=0;j<c;j++){
						if(a[i][j]=='.')
							printf("O");
						else
							printf(".");
						}
					printf("\n");
				}
						break;
		case 3: for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					if(a[i][j]=='.')
						printf("O");
					else
						printf(".");
				}
				printf("\n");
		}
	}
	
	return 0;
}
	