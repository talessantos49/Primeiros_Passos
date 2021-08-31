cid = input('Digite o nome de sua cidade aqui: ')
cid2 = cid.lstrip()
cid3 = cid2[:5].upper()
cid6 = 'SANTO' in cid3
print('Sua cidade começa com a palavra Santo: {}'.format(cid6))