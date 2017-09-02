n = int(input())

c = r = s = 0
while(n > 0):
	qtd, tipo = map(str, input().split())
	qtd = int(qtd)

	if(tipo == 'C'):
		c = c + qtd
	elif(tipo == 'R'):
		r = r + qtd
	else:
		s = s + qtd
	n -= 1	

total = c + r + s
print("Total: %d cobaias"%(total))
print("Total de coelhos:", c)
print("Total de ratos:", r)
print("Total de sapos:", s)
print("Percentual de coelhos: %.2f %%"%((c * 100)/total))
print("Percentual de ratos: %.2f %%"%((r * 100)/total))
print("Percentual de sapos: %.2f %%"%((s * 100)/total))
