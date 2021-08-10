# Crie um programa que leia o ano de nascimento de sete pessoas.
# No final mostre quantas pessoas ainda não atingiram a maior idade e quantas já são de maiores.
# Considere 21 anos a maioridade.
from datetime import date

atual = int(date.today().year)
menores = (0)
maiores = int(0)
nascimento = int(0)
for c in range(0, 7):
    nascimento = int(input('Digite sua data de nascimento: '))
    idade = atual - nascimento
    if idade < 21:
        menores += 1
    else:
        maiores += 1
print('{} pessoas já atigiram a maioridade e {} pessoas não atigiram ainda.'.format(maiores, menores))
