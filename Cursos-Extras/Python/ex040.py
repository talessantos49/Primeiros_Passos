nota1 = float(input('Digite sua primeira nota: '))
nota2 = float(input('Digite sua segunda nota: '))
media = (nota1 + nota2)/2
if media < 5.0:
    print('Reprovado!!! Sua nota foi {:.1f}'.format(media))
elif 5.0 <= media <= 6.9:
    print('Recuperação! Sua nota foi {:.1f}'.format(media))
elif media >= 7.0:
    print('PARABÉNS GAFANHOTO, VOCÊ FOI APROVADO!!!!!Com a nota {:.1f}'.format(media))
