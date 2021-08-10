preco = float(input('Digite o preço normal do produto: '))
pagamento = int(input('Digite qual a condição de pagamento:'
                      '\n(1) Dinheiro/Cheque \n(2) Cartão á Vista '
                      '\n(3) Até 2x no Cartão \n(4) 3x ou Mais no Cartão\n:  '))
if pagamento == 1:
    valor_final = preco - (preco*10/100)
    print('O valor que você vai pagar é de R${:.2f} com 10% de desconto! '.format(valor_final))
elif pagamento == 2:
    valor_final = preco - (preco*5/100)
    print('O valor que você vai pagar é de R${:.2f} com 5% de desconto!'.format(valor_final))
elif pagamento == 3:
    valor_final = preco
    print('O Valor que você vai pagar é de R${:.2f}, esse é o preço normal.'.format(valor_final))
elif pagamento == 4:
    valor_final = preco + (preco*20/100)
    print('O valor que você vai pagar é de R${:.2f}, esse é o preço com 20% de Juros!'.format(valor_final))
print('Obrigado pela Compra, agradecemos a preferencia!')
