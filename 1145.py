a, b = map(int, input().split())
a = int(a)
b = int(b)

k = 1
for i in range(1, b+1, a):
	for j in range(0, a, 1):
		if(j == a-1):
			print(i+j, end="")
		else:
			print(i+j, end=" ")
	print("")			