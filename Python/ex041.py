from datetime import date
ano = int(input('Digite o ano de nascimento do aluno: '))
idade = date.today().year - ano
if idade < 9:
    print('Você tem {} anos, sua categoria é a MIRIM!'.format(idade))
elif 9 >= idade < 14:
    print('Você tem {} anos, sua categoria é a INFANTIL!'.format(idade))
elif 14 >= idade <19:
    print('Você tem {} anos, sua categoria é a JUNIOR!'.format(idade))
elif 19 >= idade < 20:
    print('Você tem {} anos, sua categoria é a SÊNIOR!'.format(idade))

elif idade >= 20 :
    print('Você tem {} anos, sua categoria é a MASTER!'.format(idade))
