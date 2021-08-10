n1 = float(input('Insira o primeiro valor desejado: '))
n2 = float(input('Insira o segundo valor desejado: '))
n3 = float(input('Insira o terceiro valor desejado: '))
if n1 < n2 + n3 and n2 < n1 +n3 and n3 < n1+n2:
    print('Esses valores podem formar um triangulo!')
    if n1 == n2 == n3:
        print('Esse triangulo é Equilátero')
    elif n1 == n2 or n2 == n3 or n3 == n1:
        print('Esse triangulo é Isósceles')
    else:
        print('Esse triangulo é Escaleno')
else:
    print('Esses valores não podem formar um triangulo!')