def gcd(a,b):
	if(b==0):
		return a
	else:
		return gcd(b,a%b)


t=int(input())
while(t>0):
	st=list(map(int,input().split()))
	print(gcd(st[0],st[1]))
	t-=1

