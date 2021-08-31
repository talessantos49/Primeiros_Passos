#Melhore o jogo do Desafio 028 onde o computador vai "pensar" em um número entre 0 e 10.
#Só que agora o jogador vai tentar adivinhar até acertar, mostrando no final quantos palpites foram
#Necessarios para vencer.
from random import randint
from time import sleep
computador = randint(0,10)
print('-=-'*20)
print('Vou pensar em um número entre 0 e 10.Tente adivinhar...')
print('-=-'*20)
jogador = 11
tentativas=0
while computador != jogador:
    jogador = int(input('Em que número eu pensei? '))
    sleep(1)
    if computador != jogador:
        print('Você errou!, tente novamente')
    tentativas +=1
    print(computador)
print('-=-'*20)
print('Parabéns Jogador, você venceu =)!!!')
print('Você só precisou de {} tentativas. '.format(tentativas))
print('-=-'*20)