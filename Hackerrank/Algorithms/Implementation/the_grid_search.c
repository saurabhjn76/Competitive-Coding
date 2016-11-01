#include<stdio.h>
#include<math.h>
#include<malloc.h>

int main()
{
    long long int i,j,k,l,R,C,r,c,t,x,y,count=0,**a,**b;
    int ab[6];

  scanf("%lld",&t);
  while(t--)


        {
            scanf("%lld %lld",&R,&C);
            count=0;
     a=(long long int**)calloc(R,sizeof(long long int*));
     for(i=0;i<R;i++)
     {
         a[i]=(long long int*)calloc(C,sizeof(long long int));
     }

        for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
            {
                scanf("%1ld",&a[i][j]);

            }
        }
        scanf("%lld %lld",&r,&c);
         b=(long long int**)calloc(r,sizeof(long long int*));
     for(i=0;i<r;i++)
     {
         b[i]=(long long int*)calloc(c,sizeof(long long int));
     }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%1lld",&b[i][j]);

            }
        }

        for(i=0;i<=R-r;i++)
        {
            for(j=0;j<=C-c;j++)
            {
                   if(a[i][j]==b[0][0])
                   {
                       for(x=0;x<r;x++)
                       {
                           for(y=0;y<c;y++)
                           {
                               if(a[i+x][j+y]==b[x][y])
                               {
                                   count++;
                                    if(count==r*c)
        {
            printf("YES\n");
            ab[t]=1;
            x=r;
            y=c;
            i=R;
            j=C;


        }
                               }
                               else{
                                    y=c;
                                     x=r;
                                     count=0;
                                      }
                           }
                       }
                   }
            }
        }
        if(count!=r*c)
        {
            printf("NO\n");
            ab[t]=0;
            count=0;

        }
        }

        return 0;
    }
