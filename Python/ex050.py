# Desenvolva um programa que leia seis números inteiros e mostre
# A soma apenas daqueles que forem pares. Se o valor digitado for impar Desconsidere-o
d = 0
cont = 0
for c in range(0, 6):
    n = int(input('Digite um número: '))
    if n % 2 == 0:
        d = d + n
        cont += 1
print('Você informou {} números PARES e a soma foi de {}'.format(cont,d))
