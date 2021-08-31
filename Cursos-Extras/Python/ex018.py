import math
ang = float(input('Qual o angulo desejado: '))
coseno = math.cos(math.radians(ang))
seno = math.sin(math.radians(ang))
tangente = math.tan(math.radians(ang))
print('Os angulos do valor {}º são {:.3f}º Seno, {:.3f}º coseno e {:.3f}º Tangente'.format(ang, seno, coseno, tangente))
