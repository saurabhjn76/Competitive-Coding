#include<stdio.h>
typedef struct {
           int x;
           int y; }cell;
           int m,n;



int main()
{
    int t,i,j,k,index=0,max=0;
    int count=0;
    scanf("%d %d",&m,&n);
    cell a[m][n];
    int check(int i, int j, cell a[][n],int );
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j].x);
            a[i][j].y=0;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j].x==1 && a[i][j].y==0)

            {
                if(count=check(i,j,a,0))
                {
                     //printf("%d",count);
                    if(max<count)
                        max=count;
                }


            }
        }
    }
    printf("%d",max);

    return 0;
}
int check(int i,int j,cell a[m][n],int count)
{
    a[i][j].y=1;
    count++;
    // printf("%d %d   \n",i, j);
    if(i+1<m)
    {
        if(a[i+1][j].x==1 && a[i+1][j].y==0)
          count=check(i+1,j,a,count);
        if(j+1<n)
             if(a[i+1][j+1].x==1 && a[i+1][j+1].y==0)
           count=check(i+1,j+1,a,count);
        if(j-1>=0)
             if(a[i+1][j-1].x==1 && a[i+1][j-1].y==0)
           count= check(i+1,j-1,a,count);
    }
    if(i-1>=0)
    {
         if(a[i-1][j].x==1 && a[i-1][j].y==0)
          count=check(i-1,j,a,count);
        if(j+1<n)
             if(a[i-1][j+1].x==1 && a[i-1][j+1].y==0)
           count=check(i-1,j+1,a,count);
        if(j-1>=0)
             if(a[i-1][j-1].x==1 && a[i-1][j-1].y==0)
           count= check(i-1,j-1,a,count);

    }
      if(j+1<n)
             if(a[i][j+1].x==1 && a[i][j+1].y==0)
           count=check(i,j+1,a,count);
        if(j-1>=0)
             if(a[i][j-1].x==1 && a[i][j-1].y==0)
           count= check(i,j-1,a,count);

       return count;


}
