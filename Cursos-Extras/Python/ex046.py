# Desafio 046
# Faça um programa que mostre na tela uma contagem regressiva para o estouro de fogos de artificio,
# indo de 10 até 0, com pausa de 1 segundo entre eles.

from time import sleep

for s in range(10, -1, -1):
    print(s)
    sleep(1)
print('BUMM!!!')
print('FELIZ ANO NOVO \OOO!')
