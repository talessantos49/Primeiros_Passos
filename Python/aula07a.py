n1 = int(input('Primeiro Valor: '))
n2 = int(input('Segundo Valor: '))
s = n1 + n2
m = n1 * n2
d = n1 / n2
di = n1 // n2
e = n1 ** n2

print('A soma é {}\n, o produto é {}\n e a divisão é {:.2f}'.format(s,m, d), end=' ')
print('Divisão inteira {} e potência {}'.format(di, e))