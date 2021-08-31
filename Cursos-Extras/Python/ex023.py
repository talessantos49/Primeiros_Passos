num = int(input('Insira aqui um numero entre 0 e 9999: '))
u = num // 1 % 10
d = num // 10 % 10
c = num // 100 % 10
m = num // 1000 % 10
print('A unidade desse numero é : {}'.format(u))
print('A dezena desse numero é : {}'.format(d))
print('A centena desse numero é : {}'.format(c))
print('O milhar desse numero é : {}'.format(m))

