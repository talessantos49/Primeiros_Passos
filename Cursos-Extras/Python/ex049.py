# Refaça o Desafio009, mostrando a tabuada de um número que o usuario escolher,
# só que agora utilizando um laço for.
v = 0
n = int(input('Insira um número que deseja saber a tabuada: '))
print('=-' * 10)
for t in range(0, 11):
    v = n * t
    print('{} x {:2} = {}'.format(n, t, v))

print('=-' * 10)
