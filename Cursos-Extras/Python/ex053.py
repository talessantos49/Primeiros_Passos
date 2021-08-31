# Crie um programa que leia uma frase qualquer e diga se ela é um palindromo. Desconsiderando espaços

frase =str(input('Digite uma frase aqui: '))
d = frase.replace(' ','').lower()
retorno = d [::-1].lower()
if d == retorno :
    print('Essa frase é um palindromo!')
else:
    print('Essa frase não é um Palindromo =(!')
