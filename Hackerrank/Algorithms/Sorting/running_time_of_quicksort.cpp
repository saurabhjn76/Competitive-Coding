#include <bits/stdc++.h>
using namespace std;
int n,q_swap=0,i_swap=0;
void insertionSort(int N, vector<int> &arr) {
    int i,j;
    int value;
    for(i=1;i<N;i++)
    {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            i_swap++;
            j=j-1;
            
        }
        arr[j+1]=value;
    }
   /* 
   for(j=0;j<N;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }*/
        //printf("%d\n",i_swap );
}
int partion(vector<int> &arr,int lower,int upper)
{
	int pivot=arr[upper];
	int pivot_pos=upper;
	int i=lower;
	int temp;

	
	for(int j=lower;j<upper;j++)
	{
		if(arr[j]<=pivot)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			q_swap++;
		}

	}
	temp=arr[i];
		arr[i]=arr[upper];
		arr[upper]=temp;
		q_swap++;
		/* for(int i = 0; i <n; ++i) 
        cout<< arr[i] <<" ";
        printf("\n");*/
		return i;
}

void quickSort(vector <int> &arr,int lower,int upper) {
   if(upper<=lower)
   	return ;
   else
   {
   	int r_pivot=partion(arr,lower,upper);
   	
   		//printf("pivot-->%d\n",arr[r_pivot] );
   		quickSort(arr,lower,r_pivot-1);
   		quickSort(arr,r_pivot+1,upper);
  
   
   
    

   }
   return ;
}

int main()
{
    int lower=0,upper;
    cin >> n;
    upper=n-1;

    vector <int> arr(n);
    vector<int> arrb(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
        arrb[i]=arr[i];
    }
    quickSort(arr,lower,upper); 
    insertionSort(n,arrb);
    cout << i_swap-q_swap <<endl;
    return 0;
}
