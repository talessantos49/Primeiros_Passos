n1 = float(input('Digite a distancia da sua viagem em km/h: '))
if n1 <= 200:
    n2 = float(n1 * 0.5)
    print('A kilometragem percorrida foi {}, e o valor cobrado por sua viagem é R$ {:.2f}'.format(n1, n2))
else:
    n2 = float(n1 * 0.45)
    print('A kilometragem percorrida foi {}, e o valor cobrado por sua viagem é R$ {:.2f}'.format(n1, n2))
