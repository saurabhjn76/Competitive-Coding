def maxContiguousSum(a,K):
    sum_so_far =0
    max_sum = 0
    count = {} #keep track of occurrence
    for i in range(0,len(a)):
            sum_so_far += a[i]
            sum_so_far = sum_so_far%K
            if sum_so_far >= 0:
                    max_sum = max(max_sum,sum_so_far)
                    if sum_so_far in count.keys():
                            count[sum_so_far] += 1
                    else:
                            count[sum_so_far] = 1
            else:
                  #  assert sum_so_far < 0 , "Logic error"
                    #IMPORTANT: reset sum_so_far
                    sum_so_far = 0
    return max_sum,count[max_sum]

t=int(input())
for i in range(0,t):
	n,K=map(int,input().split())
	a=list(map(int,input().split()))
	max_sum,count = maxContiguousSum(a,K)
	print(max_sum,count)