from math import sqrt
a,b,c = map(float, input().split())
delta = b * b -(4*a*c)

if(delta >=0 and a != 0):
	print("R1 = %.5f" %((-b + sqrt(delta))/(2*a)))
	print("R2 = %.5f" %((-b - sqrt(delta))/(2*a)))
else:
	print("Impossivel calcular")	