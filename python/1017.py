from re import L


tempo = int(input())
velocidade = int(input())

distancia = velocidade*tempo
l = distancia/12

print("{0:.3f}".format(l))