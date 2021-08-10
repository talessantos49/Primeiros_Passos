#Desenvolva um programa que leia o nome, idade e sexo de 4 pessoas. No final do programa, mostre:
#-A média de idade do grupo.
#-Qual é o nome do homem mais velho.
#-Quantas mulheres tem menos de 20 anos.

idade = 0
sexo = 0
nome = ''
nomemaisvelho=''
maisvelho = 0
menosvinte = 0
somamenosvinte=0
mediaidade=0
soma=0
quantaspessoas=int(input('Digite a quantidade de pessoas que participarão da pesquisa: '))
for pessoa in range(1,quantaspessoas+1):
    print('=-'*10)
    nome = str(input('Qual seu nome? ').strip())
    idade = int(input('Qual sua idade: '))
    sexo = int(input('Qual seu genero? \nDigite [0] Para Homem\nDigite [1] Para Mulher\n'))
    soma += idade
    if (pessoa) == quantaspessoas:
        mediaidade=int(soma/quantaspessoas)
        print('Participaram da pesquisa {} pessoas.'
              '\nA média de idade das pessoas é de {} anos. '.format(quantaspessoas,mediaidade))
    if sexo == 0:
        if maisvelho == 0:
            maisvelho = idade
            nomemaisvelho=nome
        if maisvelho < idade:
            maisvelho=idade
            nomemaisvelho = nome
    if sexo == 1:
        if idade < 20:
            somamenosvinte += 1
print('O homem mais velho é o {} e ele tem {} anos de idade.'.format(nomemaisvelho,maisvelho))
print('A quantidade de mulheres que tem menos de 20 anos é de {}.'.format(somamenosvinte))