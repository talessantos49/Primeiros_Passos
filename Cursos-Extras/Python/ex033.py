n1 = float(input('Insira o primeiro número aqui: '))
n2 = float(input('Insira o segundo número aqui: '))
n3 = float(input('Insira o terceiro número aqui: '))
print('Os números digitados foram respectivamente {}, {} e {}.'.format(n1,n2,n3))
if n1 > n2 and n1 > n3:
    print('O maior número é {}'. format(n1))
if n1 < n2 and n1 < n3:
    print('O menor número é {}'.format(n1))
if n2 > n1 and n2 > n3:
    print('O maior número é {}.'.format(n2))
if n2 < n1 and n2 < n3:
    print('O menor número é {}.'.format(n2))
if n3 > n1 and n3 > n2:
    print('O maior número é {}.'.format(n3))
if n3 < n1 and n3 < n2:
    print('O menor número é {}.'.format(n3))
if n1 == n2:
    print('Os números {} e {}, são iguais.'.format(n1, n2))
if n1 == n3:
    print('Os números {} e {}, são iguais.'.format(n1, n3))
if n2 == n3:
    print('Os números {} e {}, são iguais.'.format(n2, n3))