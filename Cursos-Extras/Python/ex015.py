dias = int(input('Por quantos dias o carro foi alugado? '))
km = float(input('Quantos kilometros o carro percorreu? '))
print('O valor do aluguél por dias foi R${:.2f} e o valor por KM rodado foi R${:.2f}\nO Valor total a pagar é {:.2f}'.format(dias*60, km*0.15, ((dias*60)+(km*0.15))))
