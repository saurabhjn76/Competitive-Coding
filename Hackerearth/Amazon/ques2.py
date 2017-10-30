
def cost(array, m):
    return (array[-1] - array[0]) * m


def solve(array):
    global count
    count += 1
    if len(array) == 2:
        return 0, ()
    results = []
    for i in range(1, len(array)-1):
        left, x, right = array[:i+1], array[i], array[i:]
        value = cost(left, a) + cost(right, b)
        lvalue, lkaata = solve(left)
        rvalue, rkaata = solve(right)
        results.append((value + lvalue + rvalue, (x,) + lkaata + rkaata))
    return min(results)

# Test

# Recursion counter
count = 0
t = int(input())
for j in range(0,t):
	count=0
	a, b = map(int, input().split())
	n = int(input())
	array = list(map(int, input().split())) 
	value, kaata = solve(array)
	print (value)