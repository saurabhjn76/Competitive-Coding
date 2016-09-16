#include<stdio.h>
#include<math.h>
#include<string.h>
void next_move(int posr, int posc, char board[50][50],int m,int n) {
    int i ,j,k,l,nexx,nexy;
    float dis,min=100000;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(board[i][j]=='d')
            {
                dis= sqrt((float)(pow(posr-i,2)+pow(posc-j,2)));
                if(dis<min)
                {
                    min=dis;
                    nexx=i;
                    nexy=j;

                }
            }
        }
    }
    if(min==0)
       {

        printf("CLEAN\n");
               board[nexx][nexy]='-';
       }
        else if(nexy>posc)
        printf("RIGHT\n");
    else
        if(nexx>posr)
        printf("DOWN\n");
    else if(nexx<posr)
        printf("UP\n");
        else if(nexy<posc)
            printf("LEFT\n");

}
int main(void) {
    int pos[2], i,m,n;
    char board[50][50], line[50];
    scanf("%d", &pos[0]);
    scanf("%d", &pos[1]);
    scanf("%d %d",&m,&n);
    for(i=0; i<m; i++) {
        scanf("%s[^\\n]%*c", line);
        strncpy(board[i], line, n);
    }
    next_move(pos[0], pos[1], board,m,n);

    return 0;
}
