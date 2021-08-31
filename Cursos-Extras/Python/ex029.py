v1 = int(input('Digite a velocidade do carro em KM/H: '))
if v1 > 80:
    m1 = int((v1-80)*7)
    print('Você ultrapassou o limite de velocidade, sua velocidade era {} Km/h e o valor da sua multa é de R${:.2f}. '.format(v1,m1))
else:
    print('Parabéns, continue respeitando o limite de velocidade para a sua segurança e das outras pessoas!')