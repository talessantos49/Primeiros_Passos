from random import randint
from time import sleep
computador = randint(0,5)
print('-=-'*20)
print('Vou pensar em um número entre 0 e 5. Tente adivinhar...')
print('-=-'*20)
jogador = int(input('Em que número eu pensei? '))
print('Processando...')
sleep(1)
if jogador == computador:
    print('Parabens!! Você é um vencedor!')
else:
    print('Ganhei! Eu pensei no número {} e não no {}'.format(computador, jogador))