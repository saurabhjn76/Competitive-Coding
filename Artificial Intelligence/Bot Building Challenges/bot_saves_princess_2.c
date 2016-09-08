#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>


int main(void) {

    int m,posx,posxx,posy,posyy,i,j,n;
    scanf("%d",&m);
    scanf("%d %d", &n,&n);
    char grid[101][101]={};
    char line[101];
n=m;

    for( i=0; i<m; i++) {


             scanf("%s",grid[i]);
        for( j=0;j<n;j++)
             {
             if(grid[i][j]=='m')
                 {
                 posx=i;
                 posy=j;
             }
             else
                 if(grid[i][j]=='p')
                 {
                 posxx=i;
                 posyy=j;
             }

            }
       // strcpy(grid[i], line);
    }
// printf("%d %d %d %d",posx,posxx,posy,posyy);
    //displayPathtoPrincess(m,grid);
    if(abs(posxx-posx)!=0)
        {
        if(posx>posxx)
            {
            posx--;
            printf("UP\n");

        }
        else
            {
            posx++;
            printf("DOWN\n");
        }
    }
    else  if(abs(posyy-posy)!=0)
        {
        if(posy>posyy)
            {
            posy--;
            printf("LEFT\n");

        }
        else
            {
            posy++;
            printf("RIGHT\n");
        }
    }


    return 0;
}