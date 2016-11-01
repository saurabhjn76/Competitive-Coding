#include<stdio.h>

int main()
{
    int t,n,i,j,k,l,flag=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
       long  int a[n],s1=0,s2=0;
       long long int b=0;
        for(j=0;j<n;j++)
            {
                scanf("%ld",&a[j]);
              b+=a[j];
            }
            for(j=0;j<n;j++)
            {

                s2=b-a[j];
                b=s2;
            // printf("%d %d\n",s1,s2);
                 if(s1==s2)
                {
                    printf("YES\n");
                    flag=1;
                    break;
                }

                s1+=a[j];


            }
            if(flag==0)
                printf("NO\n");
            flag=0;
            s1=0;
            s2=0;
        }

    return 0;

}
