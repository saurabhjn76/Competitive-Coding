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
    int n,i;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);

    }

    quicksort(x,0,n-1);

    if(n%2==1)
    printf("%d",x[(n)/2]);
    else
        printf("%d",(x[n/2]+x[n/2+1])/2);
return 0;

}
