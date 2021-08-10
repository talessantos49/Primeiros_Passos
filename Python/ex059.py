opcao = 0
n1 = float(input('Digite o primeiro número: '))
n2 = float(input('Digite o segundo número: '))
soma = 0
mult = 0
maior = 0
while opcao != 5:
    opcao = int(input('Digite a opção desejada:'
                      '\n[1] Somar\n[2] Multiplicar\n[3] Maior\n[4] Novos números\n[5] Sair do Programa.\n '
                      'Opção: '))
    if opcao == 1:
        soma = n1 + n2
        print('O resultado é {}.'.format(soma))
    if opcao == 2:
        mult = n1 * n2
        print('O resultado é {}.'.format(mult))
    if opcao == 3:
        if n1 > n2:
            maior = n1
            print('O maior número é {}.'.format(maior))
        else:
            maior = n2
            print('O maior número é {}.'.format(maior))
    if opcao == 4:
        n1 = float(input('Digite o novo número: '))
        n2 = float(input('Digite o segundo novo número: '))
        print('Os novos números são respectivamente {} e {}. '.format(n1,n2))
print('Você decidiu deixar o programa. Tenha um bom dia!')