int count_ones(int n){
	if(n==0)
		return 0;
	else
		return 1 +count_ones(n&(n-1));
}