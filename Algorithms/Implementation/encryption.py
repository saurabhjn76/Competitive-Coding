import math
import textwrap
str1=''.join(input().strip().split())
rows=math.floor(math.sqrt(len(str1)))
col=rows 
if rows*col<len(str1):
	col+=1
	if rows*col<len(str1):
		rows+=1
l1=textwrap.wrap(str1,col)
for i in range(0,col):
	for j in range(0,rows):
		if (i+1)+(j)*col>len(str1):
			continue
		print(l1[j][i],end='')
	print(' ',end='')
