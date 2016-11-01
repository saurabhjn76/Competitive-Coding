#include<string.h>
#include<stdio.h>

int main()
{
    int px,py,qx,qy,t;
    int i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&px,&py,&qx,&qy);
        printf("%d %d\n",2*qx-px,2*qy-py);

    }
    return 0;
}