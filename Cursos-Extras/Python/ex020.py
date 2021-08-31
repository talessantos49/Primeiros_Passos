from random import shuffle

aluno1 = str(input('Digite o nome do primeiro aluno: '))
aluno2 = str(input('Digite o nome do segundo aluno: '))
aluno3 = str(input('Digite o nome do terceiro aluno: '))
aluno4 = str(input('Digite o nome do quarto aluno: '))
escolha = [aluno1, aluno2, aluno3, aluno4]
(shuffle(escolha))
print('A ordem escolhida foi: ')
print(escolha)
