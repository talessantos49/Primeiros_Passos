peso =float(input('Digite seu peso: '))
altura = float(input('Digite sua altura: '))
imc = peso/(altura * altura)
if imc < 18.5:
    print('Seu imc é de {:.2f}, Você está abaixo do peso recomendado!'.format(imc))
elif 18.5 >= imc < 25:
    print('Seu imc atual é {:.2f}, Você está em seu peso ideal, Parabens!'.format(imc))
elif 25 >= imc < 30:
    print('Seu imc atual é {:.2f}, Você está com um pouco de sobrepeso, cuidado.'.format(imc))
elif 30 >= imc < 40:
    print('Seu imc atual é {:.2f}, Você está com obesidade, procure um nutricionista.'.format(imc))
elif imc >= 40:
    print('Seu imc atual é {:.2f}, Você está com obesidade morbida, SOCORRO!!!'.format(imc))
