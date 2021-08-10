n1 = float(input('Digite o salario atual do funcionario: R$ '))
if n1 > 1250:
    n1 = n1 + (n1*10/100)
    print(' O novo salario desse colaborador é de R$ {:.2f}'.format(n1))
else:
    n1 = n1 + (n1*15/100)
    print(' O novo salario desse colaborador é de R$ {:.2f}'.format(n1))

