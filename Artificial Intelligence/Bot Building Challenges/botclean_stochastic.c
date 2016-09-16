
#include<stdio.h>
#include<math.h>
#include<string.h>
void next_move(int posr, int posc, char board[5][5]) {
    int i ,j,k,l,nexx,nexy;
    float dis,min=100;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
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
    int pos[2], i;
    char board[5][5], line[6];
    scanf("%d", &pos[0]);
    scanf("%d", &pos[1]);
    for(i=0; i<5; i++) {
        scanf("%s[^\\n]%*c", line);
        strncpy(board[i], line, 5);
    }
    next_move(pos[0], pos[1], board);

    return 0;
}
