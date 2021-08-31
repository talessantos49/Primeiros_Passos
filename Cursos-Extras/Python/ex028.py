import random

n1 = random.choice([0, 1, 2, 3, 4, 5])
n2 = int(input('Estamos pensando em um numero entre 0 e 5, tente acertar! :'))
if n1 == 0 and n2 == 5:
    print('Vish está longe!')
if n1 == 0 and n2 == 4:
    print('Ainda está bem frio...')
if n1 == 0 and n2 == 3:
    print('Está começando a esquentar. =)')
if n1 == 0 and n2 == 2:
    print('Quente, quente...')
if n1 == 0 and n2 == 1:
    print('Está muito quente aqui, só que ainda não chegou no que eu pensava!')
if n1 == 0 and n2 == 0:
    print('Parabéns Mago, seus poderes de leitura de mentes estão funcionando muito bem!')
if n1 == 1 and n2 == 5:
    print('Vish está longe!')
if n1 == 1 and n2 == 4:
    print('Ainda está bem frio...')
if n1 == 1 and n2 == 3:
    print('Está começando a esquentar. =)')
if n1 == 1 and n2 == 2:
    print('Quente, quente...')
if n1 == 1 and n2 == 1:
    print('Parabéns Mago, seus poderes de leitura de mentes estão funcionando muito bem!')
if n1 == 1 and n2 ==0:
    print('Está muito quente aqui, só que ainda não chegou no que eu pensava')
if n1 == 2 and n2 ==0:
    print('Quente, quente...')
if n1 == 2 and n2 ==1:
    print('Está muito quente aqui, só que ainda não chegou no numero que eu estava pensando')
if n1 == 2 and n2 == 2:
    print('Parabéns Mago, seus poderes de leitura de mentes estão funcionando muito bem!')
if n1 == 2 and n2 == 3:
    print('Está muito quente aqui, só que ainda não chegou no número que eu estava pensado')
if n1 == 2 and n2 == 4:
    print('Quente, quente...')
if n1 == 2 and n2 == 5:
    print('Ainda está bem frio...')
if n1 == 3 and n2 == 0:
    print('Ainda está bem frio...')
if n1 == 3 and n2 == 1:
    print('Está começando a esquentar!!')
if n1 == 3 and n2 == 2:
    print('Está muito quente aqui, só que ainda não chegou no número que eu estava pensando, tenta de novo!')
if n1 == 3 and n2 == 3:
    print ('Parabens Mago, seus poderes de leitura mental estão funcionando corretamente!')
if n1 == 3 and n2 == 4:
    print('Está muito, muito quente, só que não chegou!')
if n1 == 3 and n2 == 5:
    print('Está longe ein Parceiro!')
if n1 == 4 and n2 == 0:
    print('Muuito longe, estamos com pensamentos bem distantes ein!')
if n1 == 4 and n2 == 1:
    print('Está friozinho ainda, mas pode começar a esquentar, basta tentar de novo!')
if n1 == 4 and n2 == 2:
    print('Está quase lá, esquentando, só que não kkk!')
if n1 == 4 and n2 == 3:
    print('Passou raspando, só precisa calibrar os pensamentos na X-Escola!')
if n1 == 4 and n2 == 4:
    print('Helloo Professor Xavier, bem vindo de volta (Resposta mental)')
if n1 == 4 and n2 == 5:
    print('Passou pertinho, volte duas casas!')
if n1 == 5 and n2 == 0:
    print('Parece que você iniciou uma partida de Jumanji, porque aqui está tudo congelado!')
if n1 == 5 and n2 == 1:
    print('Alguém ligou o aquecedor? Porque estamos começando a esquentar!')
if n1 == 5 and n2 == 2:
    print('Está chegando perto, ou será que a Elsa volta pra congelar tudo de novo?')
if n1 == 5 and n2 == 3:
    print('Uma pequena chama de esperança na sua leitura mental começou a ascender, continue praticando!')
if n1 == 5 and n2 == 4:
    print('Uma biribinha de carnaval está estourando aqui, começou a ficar bem quente!!')
if n1 == 5 and n2 == 5:
    print('Parabéns, você começou um incendio de quente aqui !')
if n2 >= 6 or n2 <= -1:
    print('Esse número está fora do Range definido. Você errou!')

print('O numero que pensamos é {} e o número que você selecionou é {}'.format(n1, n2))
