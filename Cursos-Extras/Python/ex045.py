import random
pcu = random.randint(1, 3)
escolha = int(input('Vamos jogar Jokenpô?\nEscolha uma das opções abaixo:'
                    ' \n (1) Pedra\n (2) Papel\n (3) Tesoura\nSerá que você vai vencer? Tente a sorte :'))

if escolha == 1 :
    print('Você escolheu Pedra!')
elif escolha == 2 :
    print('Você escolheu Papel!')
elif escolha == 3:
    print('Você escolheu Tesoura!')
if pcu == 1 :
    print('A maquina escolheu Pedra!')
elif pcu == 2:
    print('A maquina escolheu Papel!')
elif pcu == 3:
    print('A maquina escolheu Tesoura!')
if escolha == 1 and pcu == 3:
    print('Pedra ganha de Tesoura! Parabéns Jogador.')
elif escolha == 3 and pcu == 1:
    print('Pedra ganha de Tesoura! Você Perdeu.')
elif escolha ==1 and pcu == 1:
    print('Pedra não quebra Pedra, O jogo empatou, tente novamente!')
elif escolha == 2 and pcu == 1:
    print('Papel ganha de Pedra! Parabéns Jogador!')
elif escolha == 1 and pcu == 2:
    print('Papel ganha de Pedra! Você Perdeu!')
elif escolha == 2 and pcu == 2:
    print('Papel empata com Papel. Tente novamente!')
elif escolha == 2 and pcu == 3:
    print('Papel perde pra Tesoura. Você Perdeu!')
elif escolha == 3 and pcu == 2:
    print('Tesoura ganha de Papel. Parabéns Jogador!')
elif escolha == 3 and pcu == 1:
    print('Tesoura perde pra Pedra. Você Perdeu!')
elif escolha == 3 and pcu == 3:
    print('Tesoura empata com Tesoura. Tente novamente')
