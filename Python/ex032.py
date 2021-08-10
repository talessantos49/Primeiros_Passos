n1 = int(input('Digite o ano que deseja saber: '))
n2 = (n1 % 4)
if n2 == 0:
    n3 = float(n1 % 100)
    if n3 == 0:
        n4 = float(n1 % 400)
        if n4 == 0:
            print('Esse ano é Bissexto! Tem 366 dias.')
        else:
            print('Esse ano não é Bissexto! (Ele tem 365 dias).')
    else:
        print('Esse ano é Bissexto! Tem 366 Dias. ')
else:
    print('Esse ano não é Bissexto! (Ele tem 365 dias)')