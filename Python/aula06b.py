n = (input('Digite um algo: '))
tp = (type(n))
af = (n.isalnum())
alp = (n.isalpha())
impr = (n.isprintable())
cat = (n.isupper())
num = (n.isnumeric())
dec = (n.isdecimal())
spc = (n.isspace())
baix = (n.islower())

print('O que você digitou é uma {}'.format(tp))
print('É alfanumerico? {}'.format(af))
print('É imprimivel? {}'.format(impr))
print('Esta todo em maiusculo? {} '.format(cat))
print('Esta todo em minusculo? {}'.format(baix))
print('É um numero? {}'.format(num))
print('É decimal? {}'.format(dec))
print('É um espaço? {}'.format(spc))
