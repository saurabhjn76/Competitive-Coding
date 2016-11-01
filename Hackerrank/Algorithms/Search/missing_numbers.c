
#include<stdio.h>
#include<malloc.h>

int main()
{
    long int n,m,*a,*b,*c,t,min=0,max=0,*ac,*bc;
    int i,j,k,f1,f2;
    scanf("%ld",&n);
    a=(long int*)calloc(n,sizeof(long int));
    for(i=0;i<n;i++)
        {scanf("%ld",&a[i]);}
    scanf("%ld",&m);
      b=(long int*)calloc(m,sizeof(long int));
    for(i=0;i<m;i++)
        {
            scanf("%ld",&b[i]);
            if(min>b[i])
                min=b[i];
            if(max<b[i])
                max=b[i];
        }
            ac=(long int*)calloc(max-min+1,sizeof(long int));
            bc=(long int*)calloc(max-min+1,sizeof(long int));
            for(i=0;i<m;i++)
            {
                ac[b[i]-min]++;
            }
            for(i=0;i<n;i++)
            {
               bc[a[i]-min]++;
            }
            for(i=0;i<max-min+1;i++)
            {
                if(ac[i]!=bc[i])
                  printf("%d ",i+min);

            }



return 0;
}
