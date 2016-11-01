#include<stdio.h>
int partition(int x[],int low,int high)
{
    int left=low,right=high,temp,pivot=low;
    int piv=x[low],i;
    while(left<right)
    {
        while(x[left]<=piv)
        {
            left++;
        }
        while(x[right]>piv)
        {
            right--;

        }
        if(left<right)
        {
            temp=x[left];
            x[left]=x[right];
            x[right]=temp;
        }
    }
        x[low]=x[right];
        x[right]=piv;
        // for(i=0;i<high;i++)
    {
       // printf("%d ",x[i]);
    }
    //printf("\n");
        return right;


}
void quicksort(int x[],int low ,int high)
{
    int pivot,i;
    if(high>low)
    {
        pivot=partition(x,low,high);
        quicksort(x,low,pivot-1);
        quicksort(x,pivot+1,high);
    }

}
int main()
{

    int n,i,j,max,t,count=0;
     scanf("%d",&n);
      int a[n];
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        quicksort(a,0,n-1);
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {


                t=a[i];

        }
                else
                    continue;
             for(j=0;j<n;j++)
            {
                if(a[j]>0)
                {
                    count++;
                }
            }
            for(j=0;j<n;j++)
            {

                a[j]=a[j]-t;
            }
            printf("%d\n",count);
            count=0;
        }


return 0;
}