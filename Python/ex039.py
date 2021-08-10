from datetime import date
idade = int(input('Digite o ano de seu nascimento: '))
atual = date.today().year
ano = atual - idade
diferenca = 18 - ano
diferencamaior = ano - 18
if ano < 18:
    print('Não se esqueça de se alistar ainda faltam {} anos pra você se alistar!'.format(diferenca))
elif ano == 18:
    print(
        'Está na hora de se alistar jovem gafanhoto! Dirija-se ao posto mais proximo da prefeitura e cumpra seu dever '
        'de cidadão')
elif ano > 18:
    print('Já passou da hora de você se alistar "Jovem", Já fazem {} anos.'.format(diferencamaior))
