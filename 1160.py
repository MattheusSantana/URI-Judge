n = int(input())

while(n):
	a, b, pa, pb = input().split()
	a = int(a)
	b = int(b)
	pa = float(pa) / 100
	pb = float(pb) / 100
	i = 0
	while(i < 100):
		a = int(a + (a * pa))
		b = int(b + (b * pb))

		if(a >b):
			print("%d anos."%(i+1))
			break
		i+=1	
	if(i == 100):
		print("Mais de 1 seculo.")	
	n-=1	
