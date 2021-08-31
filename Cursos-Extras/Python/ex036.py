casa = float(input('Qual será o valor da residencia? R$'))
salario = float(input('Qual é seu salario? R$'))
anos = int(input('Em quantos anos você pretende pagar? '))

meses = anos*12
parcela = casa/meses
if parcela <= (0.3*salario):
    print('Você pode financiar esse apartamento \nA parcela será de R$ {:.2f}, compativel com seu salario de R$ {:.2f}'.format(parcela, salario))
else:
    print('Seu emprestimo foi negado. Seu salario de R$ {:.2f}, não é compativel com uma prestação de R$ {:.2f}'.format(salario, parcela))
