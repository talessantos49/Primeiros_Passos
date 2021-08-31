from math import hypot

catop = float(input('Digite o valor do Cateto Oposto: '))
catad = float(input('Digite o valor do cateto adjacente: '))
hipo = hypot(catop, catad)  # sqrt((catop**2)+(catad**2))
print('O comprimento da hipotenusa é {:.2f}, considerando um cateto oposto {} e um cateto adjacente {}'.format(hipo,
                                                                                                               catop,
                                                                                                               catad))
