typedef struct Map
{
	ll index;
	ll pop;
}Map;
bool ComparePop (const Map& l,  const Map& r)
{
  return l.pop > r.pop;
}
sort(v,v+n,&ComparePop);


//-----------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;
 
void sort_by_marks(int data[][2], int n){
  auto ptr = (pair<int, int>*) data;
  sort(ptr, ptr+n);
}
 
int main() {
	// your code goes here
	int marks[5][2] = {{90, 1}, {95, 2}, {76, 3}, {87, 4}, {98, 5}};
	sort_by_marks(marks, 5);
 
	for (int i=0; i<5; i++){
		pair<int, int> z = *(((pair<int, int>*) marks) + i);
		cout<<z.first<<" "<<z.second<<endl;
	}
 
	return 0;
}
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
int a[100], p[100];
// receive input
for (int i = 0; i < n; ++i) scanf("%d", &a[i]), p[i] = i;
 
sort(p, p+n, [=](int i, int j) { return a[i] < a[j]; });
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\