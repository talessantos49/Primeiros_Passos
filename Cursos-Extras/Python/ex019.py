import random

aluno = str(input('Insira o nome de um dos alunos: '))
aluno2 = str(input('Insira o nome do segundo aluno: '))
aluno3 = str(input('Insira o nome do terceiro aluno: '))
aluno4 = str(input('Insira o nome do quarto aluno: '))
escolha = random.choice([aluno, aluno2, aluno3, aluno4])
print('O aluno escolhido é {}'.format(escolha))
