# Desenvolva um programa que leia o primeiro termo e a razão de uma PA.
# No final, mostre os 10 primeiros termos dessa progressão

a = int(input('Digite o primeiro termo da PA: '))
n = int(input('Digite a razão da PA: '))
soma = 0
for c in range(0, 10):
   if c == 0:
      print(a, end=' ')
   else:
      soma = a + (n * c)
      print(soma, end=' ')
print('Acabou')
