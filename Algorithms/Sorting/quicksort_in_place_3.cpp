#include <bits/stdc++.h>
using namespace std;
int n;
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
		}

	}
	temp=arr[i];
		arr[i]=arr[upper];
		arr[upper]=temp;
		 for(int i = 0; i <n; ++i) 
        cout<< arr[i] <<" ";
        printf("\n");
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
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }
    quickSort(arr,lower,upper); 
    return 0;
}
