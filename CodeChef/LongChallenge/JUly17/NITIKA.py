t= int(input())
s=[]
for i in range(0,t):
	s=input().title().split()
	if len(s)==1:
		print(s[0])
	elif len(s)==2:
		print(s[0][0] + ". " + s[1])
	else:
		print(s[0][0] +". " + s[1][0] + ". " + s[2])

