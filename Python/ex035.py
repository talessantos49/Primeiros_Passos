n1 = float(input('Insira o primeiro valor desejado: '))
n2 = float(input('Insira o segundo valor desejado: '))
n3 = float(input('Insira o terceiro valor desejado: '))
if n1 > n2 != n3 and n1 > n3:
    n4 = (n2 + n3)
    if n4 > n1:
        print('É possivel formar um triangulo com esses valores.')
    else:
        print('Não é possivel formar um triangulo com esses valores.')
if n2 > n1 != n3 and n2 > n3:
    n4 = (n1 + n3)
    if n4 > n2:
        print('É possivel formar um triangulo com esses valores.')
    else:
        print('Esse triangulo não pode existir!!')
if n3 > n1 != n2 and n3 > n2:
    n4 = (n1 + n2)
    if n4 > n3:
        print('A existencia desse triangulo é possivel, Vamos produzir !')
    else:
        print('A existencia desse triangulo não é possivel, tente novamente! ')
if n3 == n1 or n3 == n2 or n2 == n1:
    print('Não é possivel formar um triangulo com esses valores.')
