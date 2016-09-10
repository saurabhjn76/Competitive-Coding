#include<stdio.h>
#include<math.h>
#include<malloc.h>
long int **a,*b,*c;
int layer(int cury ,int curr ,int maxx,int maxy, int r);
int main()
{
    long int i,j,k,n,m,r,y=0,curr=0,cury=0,maxx=0,maxy=0;
    scanf("%ld %ld %ld",&m,&n,&r);
    maxx=m,maxy=n;
  a=(long int**)calloc(m,sizeof(long int*));
  for(i=0;i<m;i++)
  a[i]=(long int*)calloc(n,sizeof(long int));
  b=(long int*)calloc(2*(m+n),sizeof(long int));
   c=(long int*)calloc(2*(m+n),sizeof(long int));
    //--------
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%ld",&a[i][j]);
        }
    }

    while(curr<maxx && cury<maxy)
    {

y=layer(cury,curr,maxx,maxy,r);

          //  for(i=0;i<y;i++)
           // printf("%ld ",c[i]);
           // printf("\n");

curr++;cury++;maxx--;maxy--;
    }
for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%ld ",a[i][j]);
        }
        printf("\n");
    }



return 0;
}
int layer(int cury ,int curr ,int maxx,int maxy, int r)
{  int i,j,y=0,k;
 i=curr;

         for(j=cury;j<maxy;j++)
         {
               b[y]=a[i][j];
               y++;
         }
         for(i=curr+1;i<maxx;i++)
             {
               b[y]=a[i][j-1];
               y++;
         }
         i=maxx-1;j=maxy-2;
         for(;j>cury;j--)
             {
               b[y]=a[i][j];
               y++;
         }
         j=cury;
         for(;i>curr;i--)
             {
               b[y]=a[i][j];
               y++;
         }
         k=r%y;
for(i=0;i<y;i++)
{
     c[i]=b[(i+k)%y];

}

i=curr;y=0;
 for(j=cury;j<maxy;j++)
         {
               a[i][j]=c[y];
               y++;
         }
         for(i=curr+1;i<maxx;i++)
             {
               a[i][j-1]=c[y];
               y++;
         }
         i=maxx-1;j=maxy-2;
         for(;j>cury;j--)
             {
               a[i][j]=c[y];
               y++;
         }
         j=cury;
         for(;i>curr;i--)
             {
               a[i][j]=c[y];
               y++;
         }
return y;
}
