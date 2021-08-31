# Faça um programa que calcule a soma entre todos os numeros impares que são
# Multiplos de Três e que se encontram no intervalo de 1 até 500
n=0
contador=0
for c in range(0, 500, 3):
    if (c % 2) != 0:
        contador += 1
        n = n + c
print('A quantidade de numeros somados foi {} e a soma desses numeros deu : {}.'.format(contador,n))
