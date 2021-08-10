#Faça um programa que leia um número e diga se ele é um número primo ou não.
a = int(input('Digite um numero: '))
d = 0
for c in range(2,a+1):
    if (a % c == 0):
        print('Multiplo de : {}'.format(c))
        d += 1
if (d == 0):
    print('É Primo!')
else:
    print('Tem {} multiplos acima de 2 e abaixo de {}'.format(d,a))