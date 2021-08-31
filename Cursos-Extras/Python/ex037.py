num = int(input('Digite um valor numerico decimal aqui: '))
escolha = int(input('Escolha para qual base deseja converter o valor numerico:'
                    '\n (1) Binario\n (2) Octal\n (3) Hexadecimal\nSua Escolha: '))
if escolha == 1:
    print('O numero {} em binario é {}'.format(num, bin(num)[2:]))
elif escolha == 2:
    print('O número {} em Octal é {}'.format(num, oct(num)[2:]))
elif escolha == 3:
    print('O número {} em Hexadecimal é {}'.format(num, hex(num)[2:]))
else:
    print('Escolha uma opção valida!')
