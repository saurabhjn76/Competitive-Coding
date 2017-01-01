#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

// A utility function to get the middle index from corner indexes.
ll getMid(ll s, ll e) {  return s + (e -s)/2;  }
 
/*  A recursive function to get the sum of values in given range
    of the array. The following are parameters for this function.
 
    st    --> Poller to segment tree
    si    --> Index of current node in the segment tree. Initially
              0 is passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment represented
                 by current node, i.e., st[si]
    qs & qe  --> Starting and ending indexes of query range */
ll getSumUtil(ll *st, ll ss, ll se, ll qs, ll qe, ll si)
{
    // If segment of this node is a part of given range, then return
    // the sum of the segment
    if (qs <= ss && qe >= se)
        return st[si];
 
    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return 0;
 
    // If a part of this segment overlaps with the given range
   ll mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}
 
/* A recursive function to update the nodes which have the given 
   index in their range. The following are parameters
    st, si, ss and se are same as getSumUtil()
    i    --> index of the element to be updated. This index is 
             in input array.
   diff --> Value to be added to all nodes which have i in range */
void updateValueUtil(ll *st, ll ss, ll se, ll i, ll diff, ll si)
{
    // Base Case: If the input index lies outside the range of 
    // this segment
    if (i < ss || i > se)
        return;
 
    // If the input index is in range of this node, then update 
    // the value of the node and its children
    st[si] = st[si] + diff;
    if (se != ss)
    {
        ll mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
    }
}
 
// The function to update a value in input array and segment tree.
// It uses updateValueUtil() to update the value in segment tree
void updateValue(ll arr[], ll *st, ll n, ll i, ll new_val)
{
    // Check for erroneous input index
    if (i < 0 || i > n-1)
    {
        printf("Invalid Input");
        return;
    }
 
    // Get the difference between new value and old value
    ll diff = new_val - arr[i];
 
    // Update the value in array
    arr[i] = new_val;
 
    // Update the values of nodes in segment tree
    updateValueUtil(st, 0, n-1, i, diff, 0);
}
 
// Return sum of elements in range from index qs (quey start)
// to qe (query end).  It mainly uses getSumUtil()
ll getSum(ll *st, ll n, ll qs, ll qe)
{
    // Check for erroneous input values
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}
 
// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
ll constructSTUtil(ll arr[], ll ss, ll se, ll *st, ll si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
 
    // If there are more than one elements, then recur for left and
    // right subtrees and store the sum of values in this node
    ll mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}
 
/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
ll *constructST(ll arr[], ll n)
{
    // Allocate memory for segment tree
 
    //Height of segment tree
    ll x = (ll)(ceil(log2(n))); 
 
    //Maximum size of segment tree
    ll max_size = 2*(ll)pow(2, x) - 1; 
 
    // Allocate memory
    ll *st = new ll[max_size];
 
    // Fill the allocated memory st
    constructSTUtil(arr, 0, n-1, st, 0);
 
    // Return the constructed segment tree
    return st;
}
 
// Driver program to test above functions
int main()
{
    ll n ,q;
    cin >> n >> q;
    ll arr[n];
    for(int i=0;i<n;i++){
    	cin >> arr[i];
    }
 
    // Build segment tree from given array
    ll *st = constructST(arr, n);

    ll k,x,y,z;
    
    for(int xx=0;xx<q;xx++){
    		cin >> k;

    if(k==1){
    	cin >> x >> y;
    	printf("%lld\n",getSum(st,n,x-1,y-1));
    }
    else if(k==2){
    	cin >> x >> y >> z;
    	//printf("%lld %lld %lld\n",x,y,z);
    	for( int j=x-1;j<y;j++){
    		 updateValue(arr, st, n, j, arr[j]%z);
    	}
    }
}
 
    // Print sum of values in array from index 1 to 3
   // printf("Sum of values in given range = %d\n", 
          //  getSum(st, n, 1, 3));
 
    // Update: set arr[1] = 10 and update corresponding 
    // segment tree nodes
   // updateValue(arr, st, n, 1, 10);
 
    // Find sum after the value is updated
   // printf("Updated sum of values in given range = %d\n",
          //   getSum(st, n, 1, 3));
    return 0;
}

