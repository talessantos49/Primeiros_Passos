#Faça um programa que leia o sexo de uma pessoa, mas só aceite os valores 'M' ou 'F'.
#Caso esteja errado, peça a digitação novamente até ter um valor correto.

sexo=''
while sexo != 'M' and sexo !='F':
    sexo = str(input('Digite seu sexo por favor [M/F]: ').upper().strip())
    if sexo == 'M':
        print('Seu sexo é Masculino.')
    elif sexo == 'F':
        print('Seu sexo é feminino!')